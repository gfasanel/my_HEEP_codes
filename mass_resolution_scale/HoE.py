import math
import ROOT
ROOT.gROOT.SetBatch(ROOT.kTRUE) 

###################Take the histograms#################

file_mass=ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.root','READ')

HoE_type='HoverE'

file_res_BB = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+HoE_type+'_BB.txt'),'w+') #if you use ~gfasanel it doesn't work      
file_res_BE = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+HoE_type+'_BE.txt'),'w+') #if you use ~gfasanel it doesn't work      
file_res_EE = open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_'+HoE_type+'_EE.txt'),'w+') #if you use ~gfasanel it doesn't work      

hBase_mee_mr = file_mass.Get('hBase_mee_mr') #Taken from the file, binning decided in histos_.py

for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        print str('h_'+HoE_type+'_'+regions+'_%d'%i)
        hist   = file_mass.Get(str('h_'+HoE_type+'_'+regions+'_%d'%i))
        if regions=='BB':
          file_res_BB.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i),hist.GetMean(),hist.GetRMS()))
        elif regions=='BE':
          file_res_BE.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i),hist.GetMean(),hist.GetRMS()))
        elif regions=='EE':
          file_res_EE.write("%lf %lf %lf\n"%(hBase_mee_mr.GetBinCenter(i),hist.GetMean(),hist.GetRMS()))








