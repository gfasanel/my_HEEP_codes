//////////////////////////////////////////////////////////////////////////
//
// 'BASIC FUNCTIONALITY' RooFit tutorial macro #102
// 
// Importing data from ROOT TTrees and THx histograms
//
//
//
// 07/2008 - Wouter Verkerke 
// Working on crystal ball
/////////////////////////////////////////////////////////////////////////


//Usage:
/*
Assuming that you have a rootlogon.C which handles roofit
root -l 
root [0] .L cb_roofit.C
root [1] rf102_dataimport()
*/

#ifndef __CINT__
#include "RooGlobalFunc.h"
#endif
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooGaussian.h"
#include "RooCBShape.h"
#include "RooAbsPdf.h"
#include "TCanvas.h"
#include "RooPlot.h"
#include "TTree.h"
#include "TH1D.h"
#include "TRandom.h"
//using namespace RooFit ; //I put this in the rootlogon.C
//using namespace RooStats ; 

TH1* makeTH1() ;
TTree* makeTTree() ;


void rf102_dataimport()
{
  ////////////////////////////////////////////////////////
  // I m p o r t i n g   R O O T   h i s t o g r a m s  //
  ////////////////////////////////////////////////////////
  // I m p o r t   T H 1   i n t o   a   R o o D a t a H i s t
  // ---------------------------------------------------------

  // Create a ROOT TH1 histogram
  TH1* hh = makeTH1() ; //Just a quick histo che I make on the fly

  // Declare observable x
  RooRealVar x("x","x",-10,10) ; //name, title, range: you can use ("x","my x variable",-10,10)

  // Create a binned dataset (RooDataHist) that imports contents of TH1 and associates its contents to observable 'x'
  RooDataHist dh("dh","dh",x,Import(*hh)) ; //again "name","title"


  // P l o t   a n d   f i t   a   R o o D a t a H i s t
  // ---------------------------------------------------

  // Make plot of binned dataset showing Poisson error bars (RooFit default)
  RooPlot* frame = x.frame(Title("Imported TH1 with Poisson error bars")) ;
  dh.plotOn(frame) ; 

  // Fit a Gaussian p.d.f to the data: A Gaussian needs three vars
  //RooGaussian e' un oggetto pdf gia' implementato in RooFit
  RooRealVar mean("mean","mean",0,-10,10) ;
  RooRealVar sigma("sigma","sigma",3,0.1,10) ;
  RooRealVar alpha("alpha","alpha",3,0.1,10) ;//after alpha*sigma, gaussian connected to power law: alpha>0 => left tail; alpha<0 => right tail
  RooRealVar n("n","n",3,0.1,10) ;//exponent of the power law tail

  //RooCBShape cball(“cball”, “cball”, x, mean,sigma, alpha, n); //This way doesn't work
  RooAbsPdf *cball = new RooCBShape("cball", "crystal ball", x,mean,sigma,alpha,n);//This way works

  cball.fitTo(dh) ;
  cball.plotOn(frame) ;

  // A (binned) ML fit will ALWAYS assume the Poisson error interpretation of data (the mathematical definition 
  // of likelihood does not take any external definition of errors). Data with non-unit weights can only be correctly
  // fitted with a chi^2 fit (see rf602_chi2fit.C) 

  ////////////////////////////////////////////////
  // I m p o r t i n g   R O O T  T T r e e s   //
  ////////////////////////////////////////////////


  // I m p o r t   T T r e e   i n t o   a   R o o D a t a S e t
  // -----------------------------------------------------------

  TTree* tree = makeTTree() ;

  // Define 2nd observable y
  RooRealVar y("y","y",-10,10) ;

  // Construct unbinned dataset importing tree branches x and y matching between branches and RooRealVars 
  // is done by name of the branch/RRV 
  // 
  // Note that ONLY entries for which x,y have values within their allowed ranges as defined in 
  // RooRealVar x and y are imported. Since the y values in the import tree are in the range [-15,15]
  // and RRV y defines a range [-10,10] this means that the RooDataSet below will have less entries than the TTree 'tree'

  RooDataSet ds("ds","ds",RooArgSet(x,y),Import(*tree)) ;


  // P l o t   d a t a s e t   w i t h   m u l t i p l e   b i n n i n g   c h o i c e s
  // ------------------------------------------------------------------------------------
  
  // Print number of events in dataset
  ds.Print() ;

  // Print unbinned dataset with default frame binning (100 bins)
  RooPlot* frame3 = y.frame(Title("Unbinned data shown in default frame binning")) ;
  ds.plotOn(frame3) ;
  
  // Print unbinned dataset with custom binning choice (20 bins)
  RooPlot* frame4 = y.frame(Title("Unbinned data shown with custom binning")) ;
  ds.plotOn(frame4,Binning(20)) ;
  
  // Draw all frames on a canvas
  TCanvas* c = new TCanvas("rf102_dataimport","rf102_dataimport",800,800) ;
  c->Divide(2,2) ;
  c->cd(1) ; gPad->SetLeftMargin(0.15) ; frame->GetYaxis()->SetTitleOffset(1.4) ; frame->Draw() ;
  //c->cd(2) ; gPad->SetLeftMargin(0.15) ; frame2->GetYaxis()->SetTitleOffset(1.4) ; frame2->Draw() ;
  c->cd(3) ; gPad->SetLeftMargin(0.15) ; frame3->GetYaxis()->SetTitleOffset(1.4) ; frame3->Draw() ;
  c->cd(4) ; gPad->SetLeftMargin(0.15) ; frame4->GetYaxis()->SetTitleOffset(1.4) ; frame4->Draw() ;
  c->SaveAs("test.png");
}




TH1* makeTH1() 
{
  // Create ROOT TH1 filled with a Gaussian distribution, even if then I try to fit with a cb

  TH1D* hh = new TH1D("hh","hh",25,-10,10) ;
  for (int i=0 ; i<100 ; i++) {
    hh->Fill(gRandom->Gaus(0,3)) ;
  }
  return hh ;
}


TTree* makeTTree() 
{
  // Create ROOT TTree filled with a Gaussian distribution in x and a uniform distribution in y

  TTree* tree = new TTree("tree","tree") ;
  Double_t* px = new Double_t ;
  Double_t* py = new Double_t ;
  tree->Branch("x",px,"x/D") ;
  tree->Branch("y",py,"y/D") ;
  for (int i=0 ; i<100 ; i++) {
    *px = gRandom->Gaus(0,3) ;
    *py = gRandom->Uniform()*30 - 15 ;
    tree->Fill();
  }
  return tree;
}

