##########################################################################################
#                                  HEEP cutflow plotter                                  #
##########################################################################################
# (c) 2015 Aidan Randle-Conde (ULB), Giuseppe Fasanella (ULB)                            #
# Contact: aidan.randleconde@gmail.com, giuseppe.fasanella@cern.ch                       #
# Github:  https://github.com/ULBHEEPAnalyses/HEEPCutFlow                                #
##########################################################################################

import math

##########################################################################################
#                                  Settings for the job                                  #
##########################################################################################
sname = 'ZprimeToEE_M5000_20bx25'

##########################################################################################
#                             Import ROOT and apply settings                             #
##########################################################################################
import ROOT

ROOT.gROOT.SetBatch(ROOT.kTRUE)
#ROOT.gROOT.SetBatch(ROOT.kFALSE)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetPadTickX(1)
ROOT.gStyle.SetPadTickY(1)
#ROOT.gStyle.SetFillStyle(ROOT.kWhite)
ROOT.gStyle.SetOptTitle(0)
ROOT.gStyle.SetFrameBorderMode(ROOT.kWhite)
ROOT.gStyle.SetFrameFillColor(ROOT.kWhite)
ROOT.gStyle.SetCanvasBorderMode(ROOT.kWhite)
ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
ROOT.gStyle.SetPadBorderMode(ROOT.kWhite)
ROOT.gStyle.SetPadColor(ROOT.kWhite)
ROOT.gStyle.SetStatColor(ROOT.kWhite)
ROOT.gStyle.SetErrorX(0)


############################### Defining CB##############################################
"""
def crystalball(x,par):
#    n:par[0]
#    alpha:par[1]
#    centroid:par[2]
#    sigma:par[3]
#    peak amplitude:par[4]
#    background amplitude:par[5]
#    slope:par[6]

    if (x[0]-par[2])/par[3] < -par[1]:
        #print x
        bgkd = par[5]+par[6]*x[0]
        term1 = ((par[0]/abs(par[1]))**par[0])
        term2 = math.exp(-(par[1]**2)/2)
        term3 = par[0]/abs(par[1])-abs(par[1])-(x[0]-par[2])/par[3]
        #print bgkd
        term4 = pow(float(term3),float(par[0]))
        y = (bgkd+par[5]*term1*term2/term4)
    else:
        y = ((par[5]+x[0]*par[6])+par[4]*math.exp(-(((x[0]-par[2])/par[3])**2)/2))
    return y

fit1 = ROOT.TF1( 'fit1', crystalball,  -0.3,  0.3, 7)

#fit1.SetParameters(1,1,energy,energy*1.5/(662*2.34),spectra.returnheight(energy),100,0)

#h.Fit( fit1 , 'R' )
"""

##########################################################################################
#                                 Fitting histograms                                     #
##########################################################################################
#hBase_mee_mr = ROOT.TH1F('hBase_mee_mr', '', 60, 0, 6000) #To be taken from the file, not like this

file_mass= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.root','READ')
file_mass_fit= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res_fit.root','RECREATE')

file_res_BB = open('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_res_BB.txt','w+') #if you use ~gfasanel it doesn't work
file_res_BE = open('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_res_BE.txt','w+') #if you use ~gfasanel it doesn't work
file_res_EE = open('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_res_EE.txt','w+') #if you use ~gfasanel it doesn't work

file_scale_BB = open('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_scale_BB.txt','w+') #if you use ~gfasanel it doesn't work
file_scale_BE = open('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_scale_BE.txt','w+') #if you use ~gfasanel it doesn't work
file_scale_EE = open('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_scale_EE.txt','w+') #if you use ~gfasanel it doesn't work

hBase_mee_mr = file_mass.Get('hBase_mee_mr') #Taken from the file, binning decided in histos_.py

for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        file_mass_fit.cd()
        hist_res = file_mass.Get(str('h_resolution_'+regions+'_%d'%i))
        #Do it with crystal ball (maybe two)
        fit_function=ROOT.TF1("fit_function","gaus",-0.3,0.3);
        hist_res .Fit("fit_function")
        hist_res.Write()

        hist_scale = file_mass.Get(str('h_resolution_'+regions+'_%d'%i))
        hist_scale .Fit("gaus")
        hist_scale.Write()

        ####Write on a file the fitted parameters#####
        if hist_res.GetFunction("gaus")!= None: #In case bin empty or no fit available
            if regions=='BB':
                file_res_BB.write("%lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), hist_res.GetFunction("gaus").GetParameter(2)))
            elif regions=='BE':
                file_res_BE.write("%lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), hist_res.GetFunction("gaus").GetParameter(2)))
            elif regions=='EE':
                file_res_EE.write("%lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), hist_res.GetFunction("gaus").GetParameter(2)))

        if hist_scale.GetFunction("gaus")!= None: #In case bin empty or no fit available
            if regions=='BB':
                file_scale_BB.write("%lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), hist_scale.GetFunction("gaus").GetParameter(2)))
            elif regions=='BE':
                file_scale_BE.write("%lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), hist_scale.GetFunction("gaus").GetParameter(2)))
            elif regions=='EE':
                file_scale_EE.write("%lf %lf\n"%(hBase_mee_mr.GetBinCenter(i), hist_scale.GetFunction("gaus").GetParameter(2)))

file_mass.Close()
file_mass_fit.Close()

