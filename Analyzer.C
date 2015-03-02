#define Analyzer_cxx
#include "Analyzer.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream> 
#include <vector>
#include <TLorentzVector.h>

void Analyzer::Loop()

{

//   In a ROOT session, you can do:
//      Root > .L Analyzer.C
//      Root > Analyzer t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   if (fChain == 0) return;

   TH1F* dummyHist=new TH1F("dummyHist","",10,-0.5,10.5); //This is just the number of mc particles
   TH1F* Mee_gen  =new TH1F("Mee_gen","",100,0,200); //generated mass
   TH1F* Mee_gsf  =new TH1F("Mee_gsf","",100,0,200); //reconstructed mass

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   //Loop over entries
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      //std::cout<<"Number of generated MC particles "<<mc_n<<std::endl; //You need to include iostream, otherwise it doesn't work

      if(mc_n<2){
	continue;
      }

      int flag1=0;
      int flag2=0;

      //NOTE THAT:
      //mc_px is a pointer to a vector<float>, so to access its contents: 
      //(*mc_px) is a vector of float. 
      //Now you can do (*mc_px)[0] or (*mc_px)[0]

      TLorentzVector *ele1=new TLorentzVector(0,0,0,0);
      TLorentzVector *ele2=new TLorentzVector(0,0,0,0);
      for(int i=0;i<mc_n;i++){//Loop over generated particles
	if((*mc_pdgId)[i]==11 && flag1!=1){
	  //cout<<"****************"<<endl;
	  //cout<<"This is an electron"<<endl;
	  //cout<<"electric charge "<<(*mc_charge)[i]<<endl;
	  flag1=1;
	  ele1->SetPxPyPzE((*mc_px)[i],(*mc_py)[i],(*mc_pz)[i],(*mc_energy)[i]);
	}else if((*mc_pdgId)[i]==-11 && flag2!=1){
	  //cout<<"****************"<<endl;
	  //cout<<"This is a positron"<<endl;	 
	  //cout<<"electric charge "<<(*mc_charge)[i]<<endl;
	  flag2=1;
	  ele2->SetPxPyPzE((*mc_px)[i],(*mc_py)[i],(*mc_pz)[i],(*mc_energy)[i]);
	}
      }

      dummyHist->Fill(mc_n);
      Mee_gen->Fill((*ele1 + *ele2).M());

      ////////////////////////////RECO///////////////
      if(gsf_n<2){
	continue;
	  }

      int flag_reco1=0;
      int flag_reco2=0;
      TLorentzVector *gsf1=new TLorentzVector(0,0,0,0);
      TLorentzVector *gsf2=new TLorentzVector(0,0,0,0);
      for(int i=0;i<gsf_n;i++){//Loop over gsf electrons
	if((*gsf_charge)[i]==-1 && flag_reco1!=1){
	  flag_reco1=1;
	  //cout<<"****************"<<endl;
	  //cout<<"This is a gsf with negative charge"<<endl;	 
	  gsf1->SetPxPyPzE((*gsf_px)[i],(*gsf_py)[i],(*gsf_pz)[i],(*gsf_energy)[i]);
	}else if((*gsf_charge)[i]==1 && flag_reco2!=1){
	  flag_reco2=1;
	  //cout<<"****************"<<endl;
	  //cout<<"This is a gsf with positive charge"<<endl;	 
	  gsf2->SetPxPyPzE((*gsf_px)[i],(*gsf_py)[i],(*gsf_pz)[i],(*gsf_energy)[i]);
	}
      }

      Mee_gsf->Fill((*gsf1 + *gsf2).M());

   }

   //Plot everything//
   TCanvas* c=new TCanvas("dummyHist","");
   c->cd();
   dummyHist->Draw();

   TCanvas* c1=new TCanvas("generated Mass","");
   c1->cd();
   Mee_gen->SetLineColor(kRed);
   Mee_gen->Draw();

   TCanvas* c2=new TCanvas("reconstructed Mass","");
   c2->cd();
   Mee_gsf->SetLineColor(kBlue);
   Mee_gsf->Draw();

}
