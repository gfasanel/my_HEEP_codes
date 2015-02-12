import math
import ROOT
ROOT.gSystem.Load("libRooFit")
from ROOT import RooFit, RooRealVar, RooGaussian, RooDataSet, RooArgList, RooTreeData, RooArgSet

#from ROOT import RooFit
ROOT.gROOT.SetBatch(ROOT.kFALSE) 

#ifndef __CINT__
#include "RooGlobalFunc.h"
#endif
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooGaussian.h"pp
#include "RooCBShape.h"
#include "RooAbsPdf.h"
#include "TCanvas.h"
#include "RooPlot.h"
#include "TTree.h"
#include "TH1D.h"
#include "TRandom.h"
#using namespace RooFit ; #I put this in the rootlogon.C
#using namespace RooStats ; 

#Define a function in python
def makeTH1():
  # Create ROOT TH1 filled with a Gaussian distribution, even if then I try to fit with a cb
  hh = ROOT.TH1D("hh","hh",25,-10,10)
  for i in range(1,101): #you'll have 100 points
    hh.Fill(ROOT.gRandom.Gaus(0,3))
  return hh
#

############################
# I m p o r t i n g   R O O T   h i s t o g r a m s  #
############################
# I m p o r t   T H 1   i n t o   a   R o o D a t a H i s t
# ---------------------------------------------------------

# Create a ROOT TH1 histogram
hh = makeTH1()  #Just a quick histo che I make on the fly

# Declare observable x
x=ROOT.RooRealVar("x","x",-10,10)  #name, title, range: you can use ("x","my x variable",-10,10)
# Create a binned dataset (RooDataHist) that imports contents of TH1 and associates its contents to observable 'x'
dh=ROOT.RooDataHist("dh","dh",RooArgList(x), hh)  #again "name","title"


# P l o t   a n d   f i t   a   R o o D a t a H i s t
# ---------------------------------------------------

# Make plot of binned dataset showing Poisson error bars (RooFit default)
frame = x.frame() 
dh.plotOn(frame)  

# Fit a Gaussian p.d.f to the data: A Gaussian needs three vars
#RooGaussian e' un oggetto pdf gia' implementato in RooFit
mean=ROOT.RooRealVar("mean","mean",0,-10,10) 
sigma=ROOT.RooRealVar("sigma","sigma",3,0.1,10) 
alpha=ROOT.RooRealVar("alpha","alpha",3,0.1,10) #after alpha*sigma, gaussian connected to power law: alpha>0 => left tail alpha<0 => right tail
n=ROOT.RooRealVar("n","n",3,0.1,10) #exponent of the power law tail

#RooAbsPdf *cball = new RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n)#This way works in C++
cball=ROOT.RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n)#This way works

cball.fitTo(dh) 
cball.plotOn(frame) 

# A (binned) ML fit will ALWAYS assume the Poisson error interpretation of data (the mathematical definition 
# of likelihood does not take any external definition of errors). Data with non-unit weights can only be correctly
# fitted with a chi^2 fit (see rf602_chi2fit.C) 


c = ROOT.TCanvas("rf102_dataimport","rf102_dataimport",800,800) 
c.cd()
#gPad->SetLeftMargin(0.15)  frame->GetYaxis()->SetTitleOffset(1.4)  
frame.Draw() 
c.SaveAs("test_python.png")









