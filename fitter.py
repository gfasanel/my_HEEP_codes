##########################################################################################
#                                  HEEP cutflow plotter                                  #
##########################################################################################
# (c) 2015 Aidan Randle-Conde (ULB), Giuseppe Fasanella (ULB)                            #
# Contact: aidan.randleconde@gmail.com, giuseppe.fasanella2@gmail.com                    #
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


##########################################################################################
#                                 Fitting histograms                                     #
##########################################################################################
hBase_mee_mr = ROOT.TH1F('hBase_mee_mr', '', 60, 0, 6000) 

file_mass= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.root','UPDATE')
file_res= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.txt','RECREATE')
file_scale=ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_scale.txt','RECREATE')
file_mass.cd()
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        hist_res = file_mass.Get(str('h_resolution_'+regions+'_%d'%i))
        double_gaus=ROOT.TF1("double_gaus","gaus(0)+gaus(3)",-0.3,0.3);

        hist_res .Fit("double_gaus","R+")
        #hist_res.GetFunction("double_gaus").GetParameter(2)
        file_res.cd()
        #print hBase_mee_mr.GetBinCenter(i), hist_res.GetFunction("gaus").GetParameter(2)

        hist_scale = file_mass.Get(str('h_resolution_'+regions+'_%d'%i))
        hist_scale .Fit("gaus")
        file_scale.cd()
        #print hBase_mee_mr.GetBinCenter(i), hist_scale.GetFunction("gaus").GetParameter(2)

        hist_res.Write()
        hist_scale.Write()

        if i==50:
            canvas=ROOT.TCanvas()
            hist_res.Draw()
            canvas.SaveAs("test.root")
        
file_mass.Close()

