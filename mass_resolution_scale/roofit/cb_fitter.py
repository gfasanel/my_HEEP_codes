import math
import ROOT
ROOT.gSystem.Load("libRooFit")
from ROOT import RooFit, RooRealVar, RooGaussian, RooDataSet, RooArgList, RooTreeData, RooArgSet
ROOT.gROOT.SetBatch(ROOT.kTRUE) 

###################Take the histograms#################

file_mass=ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.root','READ')

"""
resolution_type= 'resolution'
scale_type     = 'scale'
"""
"""
resolution_type= 'resolution_supercluster'
scale_type     = 'scale_supercluster'
"""
"""
resolution_type= 'resolution_supercluster'
scale_type     = 'scale'
"""
resolution_type= 'resolution_HoE_cut'
scale_type     = 'scale_HoE_cut'

file_res_BB = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+resolution_type+'_BB.txt'),'w+') #if you use ~gfasanel it doesn't work      
file_res_BE = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+resolution_type+'_BE.txt'),'w+') #if you use ~gfasanel it doesn't work      
file_res_EE = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+resolution_type+'_EE.txt'),'w+') #if you use ~gfasanel it doesn't work      

file_scale_BB = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+scale_type+'_BB.txt'),'w+') #if you use ~gfasanel it doesn't work  
file_scale_BE = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+scale_type+'_BE.txt'),'w+') #if you use ~gfasanel it doesn't work  
file_scale_EE = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+scale_type+'_EE.txt'),'w+') #if you use ~gfasanel it doesn't work  

hBase_mee_mr = file_mass.Get('hBase_mee_mr') #Taken from the file, binning decided in histos_.py

print "###################################FITTING RESOLUTION############################################"
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        hist_res   = file_mass.Get(str('h_'+resolution_type+'_'+regions+'_%d'%i))
        if(hist_res.GetMaximum()<=5):
            hist_res.Rebin(2)
        # Declare observable x
        x=ROOT.RooRealVar("x","(m_{reco}-m_{gen})/m_{gen}",hist_res.GetMean()-1*hist_res.GetRMS(),hist_res.GetMean()+1*hist_res.GetRMS())  #name, title, range: you can use ("x","my x variable",-10,10)
        # Create a binned dataset (RooDataHist) that imports contents of TH1 and associates its contents to observable 'x'
        dh=ROOT.RooDataHist("dh","dh",RooArgList(x), hist_res)  #Without RooArgList it doesn't work

        # P l o t   a n d   f i t   a   R o o D a t a H i s t
        # ---------------------------------------------------

        # Make plot of binned dataset showing Poisson error bars (RooFit default)
        frame = x.frame(RooFit.Name("xframe"),RooFit.Title(""))#Bins(20) #This takes away "Rooplot of x"

        dh.plotOn(frame)  

        mean_guessed=hist_res.GetXaxis().GetBinCenter(hist_res.GetMaximumBin())
        sigma_guessed=hist_res.GetRMS()

        mean=ROOT.RooRealVar("mean","mean",mean_guessed,mean_guessed -0.5*sigma_guessed, mean_guessed + 0.5*sigma_guessed) #Initial guess, lower bound, upper bound 
        sigma=ROOT.RooRealVar("sigma","sigma",sigma_guessed,0.,0.025) 
        alpha=ROOT.RooRealVar("alpha","alpha",1.5,1,3) #after alpha*sigma, gaussian connected to power law: alpha>0 => left tail alpha<0 => right tail
        n=ROOT.RooRealVar("n","n",3,0.1,10) #exponent of the power law tail

        #RooAbsPdf *cball = new RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n) #This way works in C++
        cball=ROOT.RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n)#This way works in python
        cball.fitTo(dh)
        #mean.Print()
        res=cball.fitTo(dh,RooFit.Save()) #This is the general way of handling results
        sigma_fit=res.floatParsFinal().find("sigma").getVal()
        sigma_fit_error=res.floatParsFinal().find("sigma").getError()
        #print sigma_fit, sigma_fit_error
        #res.Print()

        #Plot and save the fit
        cball.plotOn(frame)
        cball.paramOn(frame,dh)
#I want to save the histogram and the fit in a file: how is it done? RooWorkSpace?? Add this later
        c = ROOT.TCanvas("fit","fit",800,800) 
        c.cd()
        chi2=frame.chiSquare()#how to plot it?
        #t1 = ROOT.TPaveLabel(0.7,0.2,0.9,0.3, "#chi^{2} = %f" %chi2) 
        #t1 = ROOT.TPaveLabel(0.7,0.2,0.9,0.3, "#chi^{2}") 
        #t1 = ROOT.TText(2,100,"Signal") ;
        #frame.addObject(t1)
        print frame.chiSquare()
        frame.Draw() 
        c.SaveAs(str('fit_results/'+hist_res.GetName()+'.png'))
#Save Parameters in a txt file
        #if hist_res.GetFunction("fit_function")!= None: #In case bin empty or no fit available                                                         
        if regions=='BB':
          file_res_BB.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), sigma_fit, sigma_fit_error))
        elif regions=='BE':
          file_res_BE.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), sigma_fit, sigma_fit_error))
        elif regions=='EE':
          file_res_EE.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i),  sigma_fit, sigma_fit_error))

###########################Same goes for the scale fit

print "###################################FITTING SCALE############################################"
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        hist_scale   = file_mass.Get(str('h_'+scale_type+'_'+regions+'_%d'%i))
        if(hist_scale.GetMaximum()<=5):
            hist_scale.Rebin(2)
        # Declare observable x
        x=ROOT.RooRealVar("x","m_{reco}/m_{gen}",hist_scale.GetMean()-1*hist_scale.GetRMS(),hist_scale.GetMean()+1*hist_scale.GetRMS())  #name, title, range: you can use ("x","my x variable",-10,10)
        # Create a binned dataset (RooDataHist) that imports contents of TH1 and associates its contents to observable 'x'
        dh=ROOT.RooDataHist("dh","dh",RooArgList(x), hist_scale)  #Without RooArgList it doesn't work

        # P l o t   a n d   f i t   a   R o o D a t a H i s t
        # ---------------------------------------------------

        # Make plot of binned dataset showing Poisson error bars (RooFit default)
        frame = x.frame(RooFit.Name("xframe"),RooFit.Title(""))#Bins(20) #This takes away "Rooplot of x"

        dh.plotOn(frame)  

        mean_guessed=hist_scale.GetXaxis().GetBinCenter(hist_scale.GetMaximumBin()) #The guessed mean is the "xmax"
        sigma_guessed=hist_scale.GetRMS()

        mean=ROOT.RooRealVar("mean","mean",mean_guessed,mean_guessed -0.5*sigma_guessed, mean_guessed + 0.5*sigma_guessed) #Initial guess, lower bound, upper bound 
        sigma=ROOT.RooRealVar("sigma","sigma",sigma_guessed,0.,0.025) 
        alpha=ROOT.RooRealVar("alpha","alpha",1.5,1,3) #after alpha*sigma, gaussian connected to power law: alpha>0 => left tail alpha<0 => right tail
        n=ROOT.RooRealVar("n","n",3,0.1,10) #exponent of the power law tail

        #RooAbsPdf *cball = new RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n) #This way works in C++
        cball=ROOT.RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n)#This way works in python
        cball.fitTo(dh)
        #mean.Print()
        scale=cball.fitTo(dh,RooFit.Save()) #This is the general way of handling scaleults, using a RooFitResults
        mean_fit=scale.floatParsFinal().find("mean").getVal()
        mean_fit_error=scale.floatParsFinal().find("mean").getError()

        #Plot and save the fit
        cball.plotOn(frame)
        cball.paramOn(frame,dh)

        c = ROOT.TCanvas("fit","fit",800,800) 
        c.cd()
        chi2=frame.chiSquare()#how to plot it?
        #t1 = ROOT.TPaveLabel(0.7,0.2,0.9,0.3, "#chi^{2} = %f" %chi2) 
        #t1 = ROOT.TPaveLabel(0.7,0.2,0.9,0.3, "#chi^{2}") 
        #t1 = ROOT.TText(2,100,"Signal") ;
        #frame.addObject(t1)
        print frame.chiSquare()
        frame.Draw() 
        c.SaveAs(str('fit_results/'+hist_scale.GetName()+'.png'))
        #Save Parameters in a txt file
        if regions=='BB':
          file_scale_BB.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), mean_fit, mean_fit_error))
        elif regions=='BE':
          file_scale_BE.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), mean_fit, mean_fit_error))
        elif regions=='EE':
          file_scale_EE.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i),  mean_fit, mean_fit_error))










