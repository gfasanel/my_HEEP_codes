##########################################################################################
#                                  PLOTTER RESOLUTION                                    #
##########################################################################################
# (c) 2015 Aidan Randle-Conde (ULB), Giuseppe Fasanella (ULB)                            #
# Contact: aidan.randleconde@gmail.com, giuseppe.fasanella@cern.ch                       #
# Github:  https://github.com/ULBHEEPAnalyses/HEEPCutFlow                                #
##########################################################################################

import math
from array import array
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

def fit_func(x,par):
    y=math.sqrt((par[0]*par[0])/(x[0]*x[0]) + par[1]*par[1]/x[0] + par[2]*par[2])
    return y


mass={}
res={}
for regions in ['BB','BE','EE']:
    mass[regions]=[]
    res[regions]=[]


#opern the file and take the numbers
for regions in ['BB','BE','EE']:
    with open(str('/user/gfasanel/public/HEEP/Eff_plots/histograms_mass_res_'+regions+'.txt')) as file_res:
        for line in file_res:  #Line is a string       #split the string on whitespace, return a list of numbers
            # (as strings)                                                                               
            numbers_str = line.split()    #convert numbers to floats   
            numbers_float = map(float, line.split())
            ##numbers_float = [float(x) for x in numbers_str]  #map(float,numbers_str) works too
            mass[regions].append(numbers_float[0])
            res[regions].append(numbers_float[1])

#usage of array for TGraph, otherwise it doesn't work
mass_array={}
res_array={}
res_graph={}
for regions in ['BB','BE','EE']:
    mass_array[regions] =array("d",mass[regions])
    res_array[regions] =array("d",res[regions])
    res_graph[regions]=ROOT.TGraph(len(mass_array[regions]),mass_array[regions],res_array[regions])

canvas={}
canvas['BB']=ROOT.TCanvas("resolution_BB","resolution_BB")
canvas['BE']=ROOT.TCanvas("resolution_BE","resolution_BE")
canvas['EE']=ROOT.TCanvas("resolution_EE","resolution_EE")

file_out= ROOT.TFile("~gfasanel/public/HEEP/Eff_plots/resolution_plot.root","RECREATE")

fit1 = ROOT.TF1( 'fit1', fit_func,  0,  6000, 3) #3 parameters for the resolution
file_out.cd()
for regions in ['BB','BE','EE']:
    canvas[regions].cd()
    res_graph[regions].Draw("AP*")
    res_graph[regions].Fit("expo")# for the moment, fit with exponential
    #res_graph[regions].Fit( fit1 , 'R' )
    canvas[regions].Write()






#fit1.SetParameters(1,1,energy,energy*1.5/(662*2.34),spectra.returnheight(energy),100,0)





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

