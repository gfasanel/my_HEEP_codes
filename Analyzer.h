//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Mar  1 11:03:19 2015 by ROOT version 5.34/18
// from TTree IIHEAnalysis/IIHEAnalysis
// found on file: outfile_1.root
//////////////////////////////////////////////////////////

#ifndef Analyzer_h
#define Analyzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class Analyzer {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          ev_event;
   UInt_t          ev_run;
   UInt_t          ev_luminosityBlock;
   UInt_t          pv_n;
   vector<float>   *pv_x;
   vector<float>   *pv_y;
   vector<float>   *pv_z;
   vector<bool>    *pv_isValid;
   vector<float>   *pv_normalizedChi2;
   vector<int>     *pv_ndof;
   vector<int>     *pv_nTracks;
   vector<int>     *pv_totTrackSize;
   UInt_t          sc_n;
   vector<float>   *sc_energy;
   vector<float>   *sc_eta;
   vector<float>   *sc_etacorr;
   vector<float>   *sc_theta;
   vector<float>   *sc_thetacorr;
   vector<float>   *sc_et;
   vector<float>   *sc_phi;
   vector<float>   *sc_px;
   vector<float>   *sc_py;
   vector<float>   *sc_pz;
   vector<float>   *sc_x;
   vector<float>   *sc_y;
   vector<float>   *sc_z;
   vector<bool>    *scmatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17PMMassFilter;
   UInt_t          ph_n;
   vector<bool>    *ph_isPFlowPhoton;
   vector<bool>    *ph_isStandardPhoton;
   vector<bool>    *ph_hasConversionTracks;
   vector<bool>    *ph_hasPixelSeed;
   vector<bool>    *ph_isEB;
   vector<bool>    *ph_isEE;
   vector<bool>    *ph_isEBGap;
   vector<bool>    *ph_isEBEtaGap;
   vector<bool>    *ph_isEBPhiGap;
   vector<bool>    *ph_isEEGap;
   vector<bool>    *ph_isEERingGap;
   vector<bool>    *ph_isEEDeeGap;
   vector<bool>    *ph_isEBEEGap;
   vector<float>   *ph_hadronicOverEm;
   vector<float>   *ph_hadronicDepth1OverEm;
   vector<float>   *ph_hadronicDepth2OverEm;
   vector<float>   *ph_hadTowOverEm;
   vector<float>   *ph_hadTowDepth1OverEm;
   vector<float>   *ph_hadTowDepth2OverEm;
   vector<float>   *ph_e1x5;
   vector<float>   *ph_e2x5;
   vector<float>   *ph_e3x3;
   vector<float>   *ph_e5x5;
   vector<float>   *ph_maxEnergyXtal;
   vector<float>   *ph_sigmaEtaEta;
   vector<float>   *ph_sigmaIetaIeta;
   vector<float>   *ph_r1x5;
   vector<float>   *ph_r2x5;
   vector<float>   *ph_r9;
   vector<float>   *ph_mipChi2;
   vector<float>   *ph_mipTotEnergy;
   vector<float>   *ph_mipSlope;
   vector<float>   *ph_mipIntercept;
   vector<int>     *ph_mipNhitCone;
   vector<bool>    *ph_mipIsHalo;
   vector<float>   *ph_ecalRecHitSumEtConeDR04;
   vector<float>   *ph_hcalTowerSumEtConeDR04;
   vector<float>   *ph_hcalDepth1TowerSumEtConeDR04;
   vector<float>   *ph_hcalDepth2TowerSumEtConeDR04;
   vector<float>   *ph_hcalTowerSumEtBcConeDR04;
   vector<float>   *ph_hcalDepth1TowerSumEtBcConeDR04;
   vector<float>   *ph_hcalDepth2TowerSumEtBcConeDR04;
   vector<float>   *ph_trkSumPtSolidConeDR04;
   vector<float>   *ph_trkSumPtHollowConeDR04;
   vector<int>     *ph_nTrkSolidConeDR04;
   vector<int>     *ph_nTrkHollowConeDR04;
   vector<float>   *ph_ecalRecHitSumEtConeDR03;
   vector<float>   *ph_hcalTowerSumEtConeDR03;
   vector<float>   *ph_hcalDepth1TowerSumEtConeDR03;
   vector<float>   *ph_hcalDepth2TowerSumEtConeDR03;
   vector<float>   *ph_hcalTowerSumEtBcConeDR03;
   vector<float>   *ph_hcalDepth1TowerSumEtBcConeDR03;
   vector<float>   *ph_hcalDepth2TowerSumEtBcConeDR03;
   vector<float>   *ph_trkSumPtSolidConeDR03;
   vector<float>   *ph_trkSumPtHollowConeDR03;
   vector<int>     *ph_nTrkSolidConeDR03;
   vector<int>     *ph_nTrkHollowConeDR03;
   vector<float>   *ph_chargedHadronIso;
   vector<float>   *ph_chargedHadronIsoWrongVtx;
   vector<float>   *ph_neutralHadronIso;
   vector<float>   *ph_photonIso;
   vector<float>   *ph_sumChargedParticlePt;
   vector<float>   *ph_sumNeutralHadronEtHighThreshold;
   vector<float>   *ph_sumPhotonEtHighThreshold;
   vector<float>   *ph_sumPUPt;
   vector<int>     *ph_nClusterOutsideMustache;
   vector<float>   *ph_etOutsideMustache;
   vector<float>   *ph_pfMVA;
   UInt_t          gsf_n;
   vector<int>     *gsf_classification;
   vector<float>   *gsf_energy;
   vector<float>   *gsf_p;
   vector<float>   *gsf_pt;
   vector<float>   *gsf_scE1x5;
   vector<float>   *gsf_scE5x5;
   vector<float>   *gsf_scE2x5Max;
   vector<float>   *gsf_eta;
   vector<float>   *gsf_phi;
   vector<float>   *gsf_theta;
   vector<float>   *gsf_px;
   vector<float>   *gsf_py;
   vector<float>   *gsf_pz;
   vector<float>   *gsf_superClusterEta;
   vector<float>   *gsf_superClusterEnergy;
   vector<float>   *gsf_caloEnergy;
   vector<float>   *gsf_deltaEtaSuperClusterTrackAtVtx;
   vector<float>   *gsf_deltaPhiSuperClusterTrackAtVtx;
   vector<float>   *gsf_hadronicOverEm;
   vector<float>   *gsf_hcalDepth1OverEcal;
   vector<float>   *gsf_hcalDepth2OverEcal;
   vector<float>   *gsf_dr03TkSumPt;
   vector<float>   *gsf_dr03EcalRecHitSumEt;
   vector<float>   *gsf_dr03HcalDepth1TowerSumEt;
   vector<float>   *gsf_dr03HcalDepth2TowerSumEt;
   vector<int>     *gsf_charge;
   vector<float>   *gsf_sigmaIetaIeta;
   vector<bool>    *gsf_ecaldrivenSeed;
   vector<bool>    *gsf_trackerdrivenSeed;
   vector<bool>    *gsf_isEB;
   vector<bool>    *gsf_isEE;
   vector<float>   *gsf_deltaEtaSeedClusterTrackAtCalo;
   vector<float>   *gsf_deltaPhiSeedClusterTrackAtCalo;
   vector<float>   *gsf_ecalEnergy;
   vector<float>   *gsf_eSuperClusterOverP;
   vector<float>   *gsf_dxy;
   vector<float>   *gsf_dxy_beamSpot;
   vector<float>   *gsf_dxy_firstPVtx;
   vector<float>   *gsf_dxyError;
   vector<float>   *gsf_dz;
   vector<float>   *gsf_dz_beamSpot;
   vector<float>   *gsf_dz_firstPVtx;
   vector<float>   *gsf_dzError;
   vector<float>   *gsf_vz;
   vector<int>     *gsf_numberOfValidHits;
   vector<int>     *gsf_nLostInnerHits;
   vector<int>     *gsf_nLostOuterHits;
   vector<int>     *gsf_convFlags;
   vector<float>   *gsf_convDist;
   vector<float>   *gsf_convDcot;
   vector<float>   *gsf_convRadius;
   vector<float>   *gsf_fBrem;
   vector<float>   *gsf_e1x5;
   vector<float>   *gsf_e2x5Max;
   vector<float>   *gsf_e5x5;
   vector<float>   *gsf_r9;
   vector<vector<int> > *gsf_hitsinfo;
   UInt_t          muon_n;
   vector<int>     *muon_charge;
   vector<float>   *muon_qoverp;
   vector<float>   *muon_pt;
   vector<float>   *muon_eta;
   vector<float>   *muon_phi;
   vector<float>   *muon_p;
   vector<float>   *muon_px;
   vector<float>   *muon_py;
   vector<float>   *muon_pz;
   vector<float>   *muon_theta;
   vector<float>   *muon_lambda;
   vector<float>   *muon_dxy;
   vector<float>   *muon_d0;
   vector<float>   *muon_dsz;
   vector<float>   *muon_dz;
   vector<float>   *muon_dxy_beamSpot;
   vector<float>   *muon_dxy_firstPVtx;
   vector<float>   *muon_dz_beamSpot;
   vector<float>   *muon_dz_firstPVtx;
   vector<float>   *muon_vx;
   vector<float>   *muon_vy;
   vector<float>   *muon_vz;
   vector<float>   *muon_outerPt;
   vector<float>   *muon_outerEta;
   vector<float>   *muon_outerPhi;
   vector<float>   *muon_outerTheta;
   vector<int>     *muon_numberOfValidPixelHits;
   vector<int>     *muon_numberOfValidTrackerHits;
   vector<int>     *muon_numberOfValidMuonHits;
   vector<int>     *muon_numberOfValidHits;
   vector<int>     *muon_trackerLayersWithMeasurement;
   vector<int>     *muon_numberOfLostHits;
   vector<int>     *muon_numberOfMatchedStations;
   vector<double>  *muon_validFraction;
   vector<bool>    *muon_isGlobalMuon;
   vector<bool>    *muon_isTrackerMuon;
   vector<bool>    *muon_isPFMuon;
   vector<bool>    *muon_isPFIsolationValid;
   vector<float>   *muon_chi2;
   vector<float>   *muon_ndof;
   vector<float>   *muon_normalizedChi2;
   vector<float>   *muon_qoverpError;
   vector<float>   *muon_ptError;
   vector<float>   *muon_thetaError;
   vector<float>   *muon_lambdaError;
   vector<float>   *muon_phiError;
   vector<float>   *muon_dxyError;
   vector<float>   *muon_d0Error;
   vector<float>   *muon_dszError;
   vector<float>   *muon_dzError;
   vector<float>   *muon_isolationR03_sumPt;
   vector<float>   *muon_isolationR03_trackerVetoPt;
   vector<float>   *muon_isolationR03_emEt;
   vector<float>   *muon_isolationR03_emVetoEt;
   vector<float>   *muon_isolationR03_hadEt;
   vector<float>   *muon_isolationR03_hadVetoEt;
   vector<float>   *muon_isolationR05_sumPt;
   vector<float>   *muon_isolationR05_trackerVetoPt;
   vector<float>   *muon_isolationR05_emEt;
   vector<float>   *muon_isolationR05_emVetoEt;
   vector<float>   *muon_isolationR05_hadEt;
   vector<float>   *muon_isolationR05_hadVetoEt;
   vector<float>   *muon_pfIsolationR03_sumChargedHadronPt;
   vector<float>   *muon_pfIsolationR03_sumChargedParticlePt;
   vector<float>   *muon_pfIsolationR03_sumPhotonEt;
   vector<float>   *muon_pfIsolationR03_sumNeutralHadronEtHighThreshold;
   vector<float>   *muon_pfIsolationR03_sumPhotonEtHighThreshold;
   vector<float>   *muon_pfIsolationR03_sumPUPt;
   vector<float>   *muon_pfIsolationR04_sumChargedHadronPt;
   vector<float>   *muon_pfIsolationR04_sumChargedParticlePt;
   vector<float>   *muon_pfIsolationR04_sumPhotonEt;
   vector<float>   *muon_pfIsolationR04_sumNeutralHadronEtHighThreshold;
   vector<float>   *muon_pfIsolationR04_sumPhotonEtHighThreshold;
   vector<float>   *muon_pfIsolationR04_sumPUPt;
   vector<float>   *muon_pfMeanDRIsoProfileR03_sumChargedHadronPt;
   vector<float>   *muon_pfMeanDRIsoProfileR03_sumChargedParticlePt;
   vector<float>   *muon_pfMeanDRIsoProfileR03_sumPhotonEt;
   vector<float>   *muon_pfMeanDRIsoProfileR03_sumNeutralHadronEtHighThreshold;
   vector<float>   *muon_pfMeanDRIsoProfileR03_sumPhotonEtHighThreshold;
   vector<float>   *muon_pfMeanDRIsoProfileR03_sumPUPt;
   vector<float>   *muon_pfMeanDRIsoProfileR04_sumChargedHadronPt;
   vector<float>   *muon_pfMeanDRIsoProfileR04_sumChargedParticlePt;
   vector<float>   *muon_pfMeanDRIsoProfileR04_sumPhotonEt;
   vector<float>   *muon_pfMeanDRIsoProfileR04_sumNeutralHadronEtHighThreshold;
   vector<float>   *muon_pfMeanDRIsoProfileR04_sumPhotonEtHighThreshold;
   vector<float>   *muon_pfMeanDRIsoProfileR04_sumPUPt;
   vector<float>   *muon_innerPosition_x;
   vector<float>   *muon_innerPosition_y;
   vector<float>   *muon_innerPosition_z;
   vector<int>     *muon_tevOptimized_charge;
   vector<float>   *muon_tevOptimized_pt;
   vector<float>   *muon_tevOptimized_eta;
   vector<float>   *muon_tevOptimized_phi;
   vector<float>   *muon_tevOptimized_theta;
   vector<float>   *muon_tevOptimized_px;
   vector<float>   *muon_tevOptimized_py;
   vector<float>   *muon_tevOptimized_pz;
   vector<float>   *muon_tevOptimized_d0;
   vector<float>   *muon_tevOptimized_dz;
   vector<float>   *muon_tevOptimized_dz_beamSpot;
   vector<float>   *muon_tevOptimized_dz_firstPVtx;
   vector<float>   *muon_tevOptimized_dxy;
   vector<float>   *muon_tevOptimized_dxy_beamSpot;
   vector<float>   *muon_tevOptimized_dxy_firstPVtx;
   vector<float>   *muon_tevOptimized_ptError;
   vector<float>   *muon_tevOptimized_etaError;
   vector<float>   *muon_tevOptimized_phiError;
   vector<float>   *muon_tevOptimized_thetaError;
   vector<float>   *muon_tevOptimized_d0Error;
   vector<float>   *muon_tevOptimized_dzError;
   vector<float>   *muon_tevOptimized_dxyError;
   Float_t         MET_met_et;
   Float_t         MET_met_phi;
   Float_t         MET_pfMet_et;
   Float_t         MET_pfMet_phi;
   vector<float>   *HEEP_eseffsixix;
   vector<float>   *HEEP_eseffsiyiy;
   vector<float>   *HEEP_eseffsirir;
   vector<float>   *HEEP_preshowerEnergy;
   vector<float>   *HEEP_e1x3;
   vector<vector<float> > *HEEP_crystal_energy;
   vector<vector<float> > *HEEP_crystal_eta;
   vector<vector<float> > *HEEP_eshitsixix;
   vector<vector<float> > *HEEP_eshitsiyiy;
   vector<vector<int> > *HEEP_crystal_ietaorix;
   vector<vector<int> > *HEEP_crystal_iphioriy;
   vector<bool>    *HEEP_cutflow41_Et;
   Int_t           HEEP_cutflow41_Et_n;
   Int_t           HEEP_cutflow41_Et_nCumulative;
   vector<float>   *HEEP_cutflow41_Et_value;
   vector<bool>    *HEEP_cutflow41_eta;
   Int_t           HEEP_cutflow41_eta_n;
   Int_t           HEEP_cutflow41_eta_nCumulative;
   vector<float>   *HEEP_cutflow41_eta_value;
   vector<bool>    *HEEP_cutflow41_EcalDriven;
   Int_t           HEEP_cutflow41_EcalDriven_n;
   Int_t           HEEP_cutflow41_EcalDriven_nCumulative;
   vector<float>   *HEEP_cutflow41_EcalDriven_value;
   vector<bool>    *HEEP_cutflow41_dEtaIn;
   Int_t           HEEP_cutflow41_dEtaIn_n;
   Int_t           HEEP_cutflow41_dEtaIn_nCumulative;
   vector<float>   *HEEP_cutflow41_dEtaIn_value;
   vector<bool>    *HEEP_cutflow41_dPhiIn;
   Int_t           HEEP_cutflow41_dPhiIn_n;
   Int_t           HEEP_cutflow41_dPhiIn_nCumulative;
   vector<float>   *HEEP_cutflow41_dPhiIn_value;
   vector<bool>    *HEEP_cutflow41_HOverE;
   Int_t           HEEP_cutflow41_HOverE_n;
   Int_t           HEEP_cutflow41_HOverE_nCumulative;
   vector<float>   *HEEP_cutflow41_HOverE_value;
   vector<bool>    *HEEP_cutflow41_SigmaIetaIeta;
   Int_t           HEEP_cutflow41_SigmaIetaIeta_n;
   Int_t           HEEP_cutflow41_SigmaIetaIeta_nCumulative;
   vector<float>   *HEEP_cutflow41_SigmaIetaIeta_value;
   vector<bool>    *HEEP_cutflow41_E1x5OverE5x5;
   Int_t           HEEP_cutflow41_E1x5OverE5x5_n;
   Int_t           HEEP_cutflow41_E1x5OverE5x5_nCumulative;
   vector<float>   *HEEP_cutflow41_E1x5OverE5x5_value;
   vector<bool>    *HEEP_cutflow41_E2x5OverE5x5;
   Int_t           HEEP_cutflow41_E2x5OverE5x5_n;
   Int_t           HEEP_cutflow41_E2x5OverE5x5_nCumulative;
   vector<float>   *HEEP_cutflow41_E2x5OverE5x5_value;
   vector<bool>    *HEEP_cutflow41_missingHits;
   Int_t           HEEP_cutflow41_missingHits_n;
   Int_t           HEEP_cutflow41_missingHits_nCumulative;
   vector<float>   *HEEP_cutflow41_missingHits_value;
   vector<bool>    *HEEP_cutflow41_dxyFirstPV;
   Int_t           HEEP_cutflow41_dxyFirstPV_n;
   Int_t           HEEP_cutflow41_dxyFirstPV_nCumulative;
   vector<float>   *HEEP_cutflow41_dxyFirstPV_value;
   vector<bool>    *HEEP_cutflow41_ID;
   Int_t           HEEP_cutflow41_ID_n;
   vector<bool>    *HEEP_cutflow41_isolEMHadDepth1;
   Int_t           HEEP_cutflow41_isolEMHadDepth1_n;
   Int_t           HEEP_cutflow41_isolEMHadDepth1_nCumulative;
   vector<float>   *HEEP_cutflow41_isolEMHadDepth1_value;
   vector<bool>    *HEEP_cutflow41_IsolPtTrks;
   Int_t           HEEP_cutflow41_IsolPtTrks_n;
   Int_t           HEEP_cutflow41_IsolPtTrks_nCumulative;
   vector<float>   *HEEP_cutflow41_IsolPtTrks_value;
   vector<bool>    *HEEP_cutflow41_isolation;
   Int_t           HEEP_cutflow41_isolation_n;
   vector<bool>    *HEEP_cutflow41_total;
   Int_t           HEEP_cutflow41_total_n;
   vector<bool>    *HEEP_cutflow50_50ns_Et;
   Int_t           HEEP_cutflow50_50ns_Et_n;
   Int_t           HEEP_cutflow50_50ns_Et_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_Et_value;
   vector<bool>    *HEEP_cutflow50_50ns_eta;
   Int_t           HEEP_cutflow50_50ns_eta_n;
   Int_t           HEEP_cutflow50_50ns_eta_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_eta_value;
   vector<bool>    *HEEP_cutflow50_50ns_EcalDriven;
   Int_t           HEEP_cutflow50_50ns_EcalDriven_n;
   Int_t           HEEP_cutflow50_50ns_EcalDriven_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_EcalDriven_value;
   vector<bool>    *HEEP_cutflow50_50ns_dEtaIn;
   Int_t           HEEP_cutflow50_50ns_dEtaIn_n;
   Int_t           HEEP_cutflow50_50ns_dEtaIn_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_dEtaIn_value;
   vector<bool>    *HEEP_cutflow50_50ns_dPhiIn;
   Int_t           HEEP_cutflow50_50ns_dPhiIn_n;
   Int_t           HEEP_cutflow50_50ns_dPhiIn_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_dPhiIn_value;
   vector<bool>    *HEEP_cutflow50_50ns_HOverE;
   Int_t           HEEP_cutflow50_50ns_HOverE_n;
   Int_t           HEEP_cutflow50_50ns_HOverE_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_HOverE_value;
   vector<bool>    *HEEP_cutflow50_50ns_SigmaIetaIeta;
   Int_t           HEEP_cutflow50_50ns_SigmaIetaIeta_n;
   Int_t           HEEP_cutflow50_50ns_SigmaIetaIeta_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_SigmaIetaIeta_value;
   vector<bool>    *HEEP_cutflow50_50ns_E1x5OverE5x5;
   Int_t           HEEP_cutflow50_50ns_E1x5OverE5x5_n;
   Int_t           HEEP_cutflow50_50ns_E1x5OverE5x5_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_E1x5OverE5x5_value;
   vector<bool>    *HEEP_cutflow50_50ns_E2x5OverE5x5;
   Int_t           HEEP_cutflow50_50ns_E2x5OverE5x5_n;
   Int_t           HEEP_cutflow50_50ns_E2x5OverE5x5_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_E2x5OverE5x5_value;
   vector<bool>    *HEEP_cutflow50_50ns_missingHits;
   Int_t           HEEP_cutflow50_50ns_missingHits_n;
   Int_t           HEEP_cutflow50_50ns_missingHits_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_missingHits_value;
   vector<bool>    *HEEP_cutflow50_50ns_dxyFirstPV;
   Int_t           HEEP_cutflow50_50ns_dxyFirstPV_n;
   Int_t           HEEP_cutflow50_50ns_dxyFirstPV_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_dxyFirstPV_value;
   vector<bool>    *HEEP_cutflow50_50ns_ID;
   Int_t           HEEP_cutflow50_50ns_ID_n;
   vector<bool>    *HEEP_cutflow50_50ns_isolEMHadDepth1;
   Int_t           HEEP_cutflow50_50ns_isolEMHadDepth1_n;
   Int_t           HEEP_cutflow50_50ns_isolEMHadDepth1_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_isolEMHadDepth1_value;
   vector<bool>    *HEEP_cutflow50_50ns_IsolPtTrks;
   Int_t           HEEP_cutflow50_50ns_IsolPtTrks_n;
   Int_t           HEEP_cutflow50_50ns_IsolPtTrks_nCumulative;
   vector<float>   *HEEP_cutflow50_50ns_IsolPtTrks_value;
   vector<bool>    *HEEP_cutflow50_50ns_isolation;
   Int_t           HEEP_cutflow50_50ns_isolation_n;
   vector<bool>    *HEEP_cutflow50_50ns_total;
   Int_t           HEEP_cutflow50_50ns_total_n;
   vector<bool>    *HEEP_cutflow50_25ns_Et;
   Int_t           HEEP_cutflow50_25ns_Et_n;
   Int_t           HEEP_cutflow50_25ns_Et_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_Et_value;
   vector<bool>    *HEEP_cutflow50_25ns_eta;
   Int_t           HEEP_cutflow50_25ns_eta_n;
   Int_t           HEEP_cutflow50_25ns_eta_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_eta_value;
   vector<bool>    *HEEP_cutflow50_25ns_EcalDriven;
   Int_t           HEEP_cutflow50_25ns_EcalDriven_n;
   Int_t           HEEP_cutflow50_25ns_EcalDriven_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_EcalDriven_value;
   vector<bool>    *HEEP_cutflow50_25ns_dEtaIn;
   Int_t           HEEP_cutflow50_25ns_dEtaIn_n;
   Int_t           HEEP_cutflow50_25ns_dEtaIn_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_dEtaIn_value;
   vector<bool>    *HEEP_cutflow50_25ns_dPhiIn;
   Int_t           HEEP_cutflow50_25ns_dPhiIn_n;
   Int_t           HEEP_cutflow50_25ns_dPhiIn_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_dPhiIn_value;
   vector<bool>    *HEEP_cutflow50_25ns_HOverE;
   Int_t           HEEP_cutflow50_25ns_HOverE_n;
   Int_t           HEEP_cutflow50_25ns_HOverE_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_HOverE_value;
   vector<bool>    *HEEP_cutflow50_25ns_SigmaIetaIeta;
   Int_t           HEEP_cutflow50_25ns_SigmaIetaIeta_n;
   Int_t           HEEP_cutflow50_25ns_SigmaIetaIeta_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_SigmaIetaIeta_value;
   vector<bool>    *HEEP_cutflow50_25ns_E1x5OverE5x5;
   Int_t           HEEP_cutflow50_25ns_E1x5OverE5x5_n;
   Int_t           HEEP_cutflow50_25ns_E1x5OverE5x5_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_E1x5OverE5x5_value;
   vector<bool>    *HEEP_cutflow50_25ns_E2x5OverE5x5;
   Int_t           HEEP_cutflow50_25ns_E2x5OverE5x5_n;
   Int_t           HEEP_cutflow50_25ns_E2x5OverE5x5_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_E2x5OverE5x5_value;
   vector<bool>    *HEEP_cutflow50_25ns_missingHits;
   Int_t           HEEP_cutflow50_25ns_missingHits_n;
   Int_t           HEEP_cutflow50_25ns_missingHits_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_missingHits_value;
   vector<bool>    *HEEP_cutflow50_25ns_dxyFirstPV;
   Int_t           HEEP_cutflow50_25ns_dxyFirstPV_n;
   Int_t           HEEP_cutflow50_25ns_dxyFirstPV_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_dxyFirstPV_value;
   vector<bool>    *HEEP_cutflow50_25ns_ID;
   Int_t           HEEP_cutflow50_25ns_ID_n;
   vector<bool>    *HEEP_cutflow50_25ns_isolEMHadDepth1;
   Int_t           HEEP_cutflow50_25ns_isolEMHadDepth1_n;
   Int_t           HEEP_cutflow50_25ns_isolEMHadDepth1_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_isolEMHadDepth1_value;
   vector<bool>    *HEEP_cutflow50_25ns_IsolPtTrks;
   Int_t           HEEP_cutflow50_25ns_IsolPtTrks_n;
   Int_t           HEEP_cutflow50_25ns_IsolPtTrks_nCumulative;
   vector<float>   *HEEP_cutflow50_25ns_IsolPtTrks_value;
   vector<bool>    *HEEP_cutflow50_25ns_isolation;
   Int_t           HEEP_cutflow50_25ns_isolation_n;
   vector<bool>    *HEEP_cutflow50_25ns_total;
   Int_t           HEEP_cutflow50_25ns_total_n;
   UInt_t          mc_n;
   vector<int>     *mc_index;
   vector<int>     *mc_pdgId;
   vector<int>     *mc_charge;
   vector<int>     *mc_status;
   vector<float>   *mc_mass;
   vector<float>   *mc_px;
   vector<float>   *mc_py;
   vector<float>   *mc_pz;
   vector<float>   *mc_pt;
   vector<float>   *mc_eta;
   vector<float>   *mc_phi;
   vector<float>   *mc_energy;
   vector<unsigned int> *mc_numberOfDaughters;
   vector<unsigned int> *mc_numberOfMothers;
   vector<vector<int> > *mc_mother_index;
   vector<vector<int> > *mc_mother_pdgId;
   vector<vector<float> > *mc_mother_px;
   vector<vector<float> > *mc_mother_py;
   vector<vector<float> > *mc_mother_pz;
   vector<vector<float> > *mc_mother_pt;
   vector<vector<float> > *mc_mother_eta;
   vector<vector<float> > *mc_mother_phi;
   vector<vector<float> > *mc_mother_energy;
   vector<vector<float> > *mc_mother_mass;
   vector<bool>    *gsf_triggerMatch_hltL1sL1SingleEG12;
   vector<bool>    *gsf_triggerMatch_hltL1sL1Mu3p5EG12;
   vector<bool>    *gsf_triggerMatch_hltL1sL1SingleEG22;
   vector<bool>    *gsf_triggerMatch_hltEle33CaloIdLPixelMatchFilter;
   vector<bool>    *gsf_triggerMatch_hltDiEle33CaloIdLGsfTrkIdVLDPhiDoubleFilter;
   vector<bool>    *gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoFilter;
   vector<bool>    *gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoDoubleFilter;
   vector<bool>    *gsf_triggerMatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17TrackIsoFilter;
   vector<bool>    *gsf_triggerMatch_hltEle27WP80TrackIsoFilter;
   vector<bool>    *gsf_triggerMatch_hltMu22Photon22CaloIdLHEFilter;
   vector<bool>    *hltL1sMu16Eta2p1;
   vector<bool>    *hltL1sL1Mu3p5EG12;
   vector<bool>    *hltL1Mu3p5EG12L3Filtered22;
   vector<bool>    *hltL3fL1sMu16Eta2p1L1f0L2f16QL3Filtered40Q;

   // List of branches
   TBranch        *b_ev_event;   //!
   TBranch        *b_ev_run;   //!
   TBranch        *b_ev_luminosityBlock;   //!
   TBranch        *b_pv_n;   //!
   TBranch        *b_pv_x;   //!
   TBranch        *b_pv_y;   //!
   TBranch        *b_pv_z;   //!
   TBranch        *b_pv_isValid;   //!
   TBranch        *b_pv_normalizedChi2;   //!
   TBranch        *b_pv_ndof;   //!
   TBranch        *b_pv_nTracks;   //!
   TBranch        *b_pv_totTrackSize;   //!
   TBranch        *b_sc_n;   //!
   TBranch        *b_sc_energy;   //!
   TBranch        *b_sc_eta;   //!
   TBranch        *b_sc_etacorr;   //!
   TBranch        *b_sc_theta;   //!
   TBranch        *b_sc_thetacorr;   //!
   TBranch        *b_sc_et;   //!
   TBranch        *b_sc_phi;   //!
   TBranch        *b_sc_px;   //!
   TBranch        *b_sc_py;   //!
   TBranch        *b_sc_pz;   //!
   TBranch        *b_sc_x;   //!
   TBranch        *b_sc_y;   //!
   TBranch        *b_sc_z;   //!
   TBranch        *b_scmatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17PMMassFilter;   //!
   TBranch        *b_ph_n;   //!
   TBranch        *b_ph_isPFlowPhoton;   //!
   TBranch        *b_ph_isStandardPhoton;   //!
   TBranch        *b_ph_hasConversionTracks;   //!
   TBranch        *b_ph_hasPixelSeed;   //!
   TBranch        *b_ph_isEB;   //!
   TBranch        *b_ph_isEE;   //!
   TBranch        *b_ph_isEBGap;   //!
   TBranch        *b_ph_isEBEtaGap;   //!
   TBranch        *b_ph_isEBPhiGap;   //!
   TBranch        *b_ph_isEEGap;   //!
   TBranch        *b_ph_isEERingGap;   //!
   TBranch        *b_ph_isEEDeeGap;   //!
   TBranch        *b_ph_isEBEEGap;   //!
   TBranch        *b_ph_hadronicOverEm;   //!
   TBranch        *b_ph_hadronicDepth1OverEm;   //!
   TBranch        *b_ph_hadronicDepth2OverEm;   //!
   TBranch        *b_ph_hadTowOverEm;   //!
   TBranch        *b_ph_hadTowDepth1OverEm;   //!
   TBranch        *b_ph_hadTowDepth2OverEm;   //!
   TBranch        *b_ph_e1x5;   //!
   TBranch        *b_ph_e2x5;   //!
   TBranch        *b_ph_e3x3;   //!
   TBranch        *b_ph_e5x5;   //!
   TBranch        *b_ph_maxEnergyXtal;   //!
   TBranch        *b_ph_sigmaEtaEta;   //!
   TBranch        *b_ph_sigmaIetaIeta;   //!
   TBranch        *b_ph_r1x5;   //!
   TBranch        *b_ph_r2x5;   //!
   TBranch        *b_ph_r9;   //!
   TBranch        *b_ph_mipChi2;   //!
   TBranch        *b_ph_mipTotEnergy;   //!
   TBranch        *b_ph_mipSlope;   //!
   TBranch        *b_ph_mipIntercept;   //!
   TBranch        *b_ph_mipNhitCone;   //!
   TBranch        *b_ph_mipIsHalo;   //!
   TBranch        *b_ph_ecalRecHitSumEtConeDR04;   //!
   TBranch        *b_ph_hcalTowerSumEtConeDR04;   //!
   TBranch        *b_ph_hcalDepth1TowerSumEtConeDR04;   //!
   TBranch        *b_ph_hcalDepth2TowerSumEtConeDR04;   //!
   TBranch        *b_ph_hcalTowerSumEtBcConeDR04;   //!
   TBranch        *b_ph_hcalDepth1TowerSumEtBcConeDR04;   //!
   TBranch        *b_ph_hcalDepth2TowerSumEtBcConeDR04;   //!
   TBranch        *b_ph_trkSumPtSolidConeDR04;   //!
   TBranch        *b_ph_trkSumPtHollowConeDR04;   //!
   TBranch        *b_ph_nTrkSolidConeDR04;   //!
   TBranch        *b_ph_nTrkHollowConeDR04;   //!
   TBranch        *b_ph_ecalRecHitSumEtConeDR03;   //!
   TBranch        *b_ph_hcalTowerSumEtConeDR03;   //!
   TBranch        *b_ph_hcalDepth1TowerSumEtConeDR03;   //!
   TBranch        *b_ph_hcalDepth2TowerSumEtConeDR03;   //!
   TBranch        *b_ph_hcalTowerSumEtBcConeDR03;   //!
   TBranch        *b_ph_hcalDepth1TowerSumEtBcConeDR03;   //!
   TBranch        *b_ph_hcalDepth2TowerSumEtBcConeDR03;   //!
   TBranch        *b_ph_trkSumPtSolidConeDR03;   //!
   TBranch        *b_ph_trkSumPtHollowConeDR03;   //!
   TBranch        *b_ph_nTrkSolidConeDR03;   //!
   TBranch        *b_ph_nTrkHollowConeDR03;   //!
   TBranch        *b_ph_chargedHadronIso;   //!
   TBranch        *b_ph_chargedHadronIsoWrongVtx;   //!
   TBranch        *b_ph_neutralHadronIso;   //!
   TBranch        *b_ph_photonIso;   //!
   TBranch        *b_ph_sumChargedParticlePt;   //!
   TBranch        *b_ph_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_ph_sumPhotonEtHighThreshold;   //!
   TBranch        *b_ph_sumPUPt;   //!
   TBranch        *b_ph_nClusterOutsideMustache;   //!
   TBranch        *b_ph_etOutsideMustache;   //!
   TBranch        *b_ph_pfMVA;   //!
   TBranch        *b_gsf_n;   //!
   TBranch        *b_gsf_classification;   //!
   TBranch        *b_gsf_energy;   //!
   TBranch        *b_gsf_p;   //!
   TBranch        *b_gsf_pt;   //!
   TBranch        *b_gsf_scE1x5;   //!
   TBranch        *b_gsf_scE5x5;   //!
   TBranch        *b_gsf_scE2x5Max;   //!
   TBranch        *b_gsf_eta;   //!
   TBranch        *b_gsf_phi;   //!
   TBranch        *b_gsf_theta;   //!
   TBranch        *b_gsf_px;   //!
   TBranch        *b_gsf_py;   //!
   TBranch        *b_gsf_pz;   //!
   TBranch        *b_gsf_superClusterEta;   //!
   TBranch        *b_gsf_superClusterEnergy;   //!
   TBranch        *b_gsf_caloEnergy;   //!
   TBranch        *b_gsf_deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_gsf_deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_gsf_hadronicOverEm;   //!
   TBranch        *b_gsf_hcalDepth1OverEcal;   //!
   TBranch        *b_gsf_hcalDepth2OverEcal;   //!
   TBranch        *b_gsf_dr03TkSumPt;   //!
   TBranch        *b_gsf_dr03EcalRecHitSumEt;   //!
   TBranch        *b_gsf_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_gsf_dr03HcalDepth2TowerSumEt;   //!
   TBranch        *b_gsf_charge;   //!
   TBranch        *b_gsf_sigmaIetaIeta;   //!
   TBranch        *b_gsf_ecaldrivenSeed;   //!
   TBranch        *b_gsf_trackerdrivenSeed;   //!
   TBranch        *b_gsf_isEB;   //!
   TBranch        *b_gsf_isEE;   //!
   TBranch        *b_gsf_deltaEtaSeedClusterTrackAtCalo;   //!
   TBranch        *b_gsf_deltaPhiSeedClusterTrackAtCalo;   //!
   TBranch        *b_gsf_ecalEnergy;   //!
   TBranch        *b_gsf_eSuperClusterOverP;   //!
   TBranch        *b_gsf_dxy;   //!
   TBranch        *b_gsf_dxy_beamSpot;   //!
   TBranch        *b_gsf_dxy_firstPVtx;   //!
   TBranch        *b_gsf_dxyError;   //!
   TBranch        *b_gsf_dz;   //!
   TBranch        *b_gsf_dz_beamSpot;   //!
   TBranch        *b_gsf_dz_firstPVtx;   //!
   TBranch        *b_gsf_dzError;   //!
   TBranch        *b_gsf_vz;   //!
   TBranch        *b_gsf_numberOfValidHits;   //!
   TBranch        *b_gsf_nLostInnerHits;   //!
   TBranch        *b_gsf_nLostOuterHits;   //!
   TBranch        *b_gsf_convFlags;   //!
   TBranch        *b_gsf_convDist;   //!
   TBranch        *b_gsf_convDcot;   //!
   TBranch        *b_gsf_convRadius;   //!
   TBranch        *b_gsf_fBrem;   //!
   TBranch        *b_gsf_e1x5;   //!
   TBranch        *b_gsf_e2x5Max;   //!
   TBranch        *b_gsf_e5x5;   //!
   TBranch        *b_gsf_r9;   //!
   TBranch        *b_gsf_hitsinfo;   //!
   TBranch        *b_muon_n;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_qoverp;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_p;   //!
   TBranch        *b_muon_px;   //!
   TBranch        *b_muon_py;   //!
   TBranch        *b_muon_pz;   //!
   TBranch        *b_muon_theta;   //!
   TBranch        *b_muon_lambda;   //!
   TBranch        *b_muon_dxy;   //!
   TBranch        *b_muon_d0;   //!
   TBranch        *b_muon_dsz;   //!
   TBranch        *b_muon_dz;   //!
   TBranch        *b_muon_dxy_beamSpot;   //!
   TBranch        *b_muon_dxy_firstPVtx;   //!
   TBranch        *b_muon_dz_beamSpot;   //!
   TBranch        *b_muon_dz_firstPVtx;   //!
   TBranch        *b_muon_vx;   //!
   TBranch        *b_muon_vy;   //!
   TBranch        *b_muon_vz;   //!
   TBranch        *b_muon_outerPt;   //!
   TBranch        *b_muon_outerEta;   //!
   TBranch        *b_muon_outerPhi;   //!
   TBranch        *b_muon_outerTheta;   //!
   TBranch        *b_muon_numberOfValidPixelHits;   //!
   TBranch        *b_muon_numberOfValidTrackerHits;   //!
   TBranch        *b_muon_numberOfValidMuonHits;   //!
   TBranch        *b_muon_numberOfValidHits;   //!
   TBranch        *b_muon_trackerLayersWithMeasurement;   //!
   TBranch        *b_muon_numberOfLostHits;   //!
   TBranch        *b_muon_numberOfMatchedStations;   //!
   TBranch        *b_muon_validFraction;   //!
   TBranch        *b_muon_isGlobalMuon;   //!
   TBranch        *b_muon_isTrackerMuon;   //!
   TBranch        *b_muon_isPFMuon;   //!
   TBranch        *b_muon_isPFIsolationValid;   //!
   TBranch        *b_muon_chi2;   //!
   TBranch        *b_muon_ndof;   //!
   TBranch        *b_muon_normalizedChi2;   //!
   TBranch        *b_muon_qoverpError;   //!
   TBranch        *b_muon_ptError;   //!
   TBranch        *b_muon_thetaError;   //!
   TBranch        *b_muon_lambdaError;   //!
   TBranch        *b_muon_phiError;   //!
   TBranch        *b_muon_dxyError;   //!
   TBranch        *b_muon_d0Error;   //!
   TBranch        *b_muon_dszError;   //!
   TBranch        *b_muon_dzError;   //!
   TBranch        *b_muon_isolationR03_sumPt;   //!
   TBranch        *b_muon_isolationR03_trackerVetoPt;   //!
   TBranch        *b_muon_isolationR03_emEt;   //!
   TBranch        *b_muon_isolationR03_emVetoEt;   //!
   TBranch        *b_muon_isolationR03_hadEt;   //!
   TBranch        *b_muon_isolationR03_hadVetoEt;   //!
   TBranch        *b_muon_isolationR05_sumPt;   //!
   TBranch        *b_muon_isolationR05_trackerVetoPt;   //!
   TBranch        *b_muon_isolationR05_emEt;   //!
   TBranch        *b_muon_isolationR05_emVetoEt;   //!
   TBranch        *b_muon_isolationR05_hadEt;   //!
   TBranch        *b_muon_isolationR05_hadVetoEt;   //!
   TBranch        *b_muon_pfIsolationR03_sumChargedHadronPt;   //!
   TBranch        *b_muon_pfIsolationR03_sumChargedParticlePt;   //!
   TBranch        *b_muon_pfIsolationR03_sumPhotonEt;   //!
   TBranch        *b_muon_pfIsolationR03_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_muon_pfIsolationR03_sumPhotonEtHighThreshold;   //!
   TBranch        *b_muon_pfIsolationR03_sumPUPt;   //!
   TBranch        *b_muon_pfIsolationR04_sumChargedHadronPt;   //!
   TBranch        *b_muon_pfIsolationR04_sumChargedParticlePt;   //!
   TBranch        *b_muon_pfIsolationR04_sumPhotonEt;   //!
   TBranch        *b_muon_pfIsolationR04_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_muon_pfIsolationR04_sumPhotonEtHighThreshold;   //!
   TBranch        *b_muon_pfIsolationR04_sumPUPt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR03_sumChargedHadronPt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR03_sumChargedParticlePt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR03_sumPhotonEt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR03_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR03_sumPhotonEtHighThreshold;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR03_sumPUPt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR04_sumChargedHadronPt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR04_sumChargedParticlePt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR04_sumPhotonEt;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR04_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR04_sumPhotonEtHighThreshold;   //!
   TBranch        *b_muon_pfMeanDRIsoProfileR04_sumPUPt;   //!
   TBranch        *b_muon_innerPosition_x;   //!
   TBranch        *b_muon_innerPosition_y;   //!
   TBranch        *b_muon_innerPosition_z;   //!
   TBranch        *b_muon_tevOptimized_charge;   //!
   TBranch        *b_muon_tevOptimized_pt;   //!
   TBranch        *b_muon_tevOptimized_eta;   //!
   TBranch        *b_muon_tevOptimized_phi;   //!
   TBranch        *b_muon_tevOptimized_theta;   //!
   TBranch        *b_muon_tevOptimized_px;   //!
   TBranch        *b_muon_tevOptimized_py;   //!
   TBranch        *b_muon_tevOptimized_pz;   //!
   TBranch        *b_muon_tevOptimized_d0;   //!
   TBranch        *b_muon_tevOptimized_dz;   //!
   TBranch        *b_muon_tevOptimized_dz_beamSpot;   //!
   TBranch        *b_muon_tevOptimized_dz_firstPVtx;   //!
   TBranch        *b_muon_tevOptimized_dxy;   //!
   TBranch        *b_muon_tevOptimized_dxy_beamSpot;   //!
   TBranch        *b_muon_tevOptimized_dxy_firstPVtx;   //!
   TBranch        *b_muon_tevOptimized_ptError;   //!
   TBranch        *b_muon_tevOptimized_etaError;   //!
   TBranch        *b_muon_tevOptimized_phiError;   //!
   TBranch        *b_muon_tevOptimized_thetaError;   //!
   TBranch        *b_muon_tevOptimized_d0Error;   //!
   TBranch        *b_muon_tevOptimized_dzError;   //!
   TBranch        *b_muon_tevOptimized_dxyError;   //!
   TBranch        *b_MET_met_et;   //!
   TBranch        *b_MET_met_phi;   //!
   TBranch        *b_MET_pfMet_et;   //!
   TBranch        *b_MET_pfMet_phi;   //!
   TBranch        *b_HEEP_eseffsixix;   //!
   TBranch        *b_HEEP_eseffsiyiy;   //!
   TBranch        *b_HEEP_eseffsirir;   //!
   TBranch        *b_HEEP_preshowerEnergy;   //!
   TBranch        *b_HEEP_e1x3;   //!
   TBranch        *b_HEEP_crystal_energy;   //!
   TBranch        *b_HEEP_crystal_eta;   //!
   TBranch        *b_HEEP_eshitsixix;   //!
   TBranch        *b_HEEP_eshitsiyiy;   //!
   TBranch        *b_HEEP_crystal_ietaorix;   //!
   TBranch        *b_HEEP_crystal_iphioriy;   //!
   TBranch        *b_HEEP_cutflow41_Et;   //!
   TBranch        *b_HEEP_cutflow41_Et_n;   //!
   TBranch        *b_HEEP_cutflow41_Et_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_Et_value;   //!
   TBranch        *b_HEEP_cutflow41_eta;   //!
   TBranch        *b_HEEP_cutflow41_eta_n;   //!
   TBranch        *b_HEEP_cutflow41_eta_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_eta_value;   //!
   TBranch        *b_HEEP_cutflow41_EcalDriven;   //!
   TBranch        *b_HEEP_cutflow41_EcalDriven_n;   //!
   TBranch        *b_HEEP_cutflow41_EcalDriven_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_EcalDriven_value;   //!
   TBranch        *b_HEEP_cutflow41_dEtaIn;   //!
   TBranch        *b_HEEP_cutflow41_dEtaIn_n;   //!
   TBranch        *b_HEEP_cutflow41_dEtaIn_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_dEtaIn_value;   //!
   TBranch        *b_HEEP_cutflow41_dPhiIn;   //!
   TBranch        *b_HEEP_cutflow41_dPhiIn_n;   //!
   TBranch        *b_HEEP_cutflow41_dPhiIn_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_dPhiIn_value;   //!
   TBranch        *b_HEEP_cutflow41_HOverE;   //!
   TBranch        *b_HEEP_cutflow41_HOverE_n;   //!
   TBranch        *b_HEEP_cutflow41_HOverE_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_HOverE_value;   //!
   TBranch        *b_HEEP_cutflow41_SigmaIetaIeta;   //!
   TBranch        *b_HEEP_cutflow41_SigmaIetaIeta_n;   //!
   TBranch        *b_HEEP_cutflow41_SigmaIetaIeta_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_SigmaIetaIeta_value;   //!
   TBranch        *b_HEEP_cutflow41_E1x5OverE5x5;   //!
   TBranch        *b_HEEP_cutflow41_E1x5OverE5x5_n;   //!
   TBranch        *b_HEEP_cutflow41_E1x5OverE5x5_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_E1x5OverE5x5_value;   //!
   TBranch        *b_HEEP_cutflow41_E2x5OverE5x5;   //!
   TBranch        *b_HEEP_cutflow41_E2x5OverE5x5_n;   //!
   TBranch        *b_HEEP_cutflow41_E2x5OverE5x5_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_E2x5OverE5x5_value;   //!
   TBranch        *b_HEEP_cutflow41_missingHits;   //!
   TBranch        *b_HEEP_cutflow41_missingHits_n;   //!
   TBranch        *b_HEEP_cutflow41_missingHits_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_missingHits_value;   //!
   TBranch        *b_HEEP_cutflow41_dxyFirstPV;   //!
   TBranch        *b_HEEP_cutflow41_dxyFirstPV_n;   //!
   TBranch        *b_HEEP_cutflow41_dxyFirstPV_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_dxyFirstPV_value;   //!
   TBranch        *b_HEEP_cutflow41_ID;   //!
   TBranch        *b_HEEP_cutflow41_ID_n;   //!
   TBranch        *b_HEEP_cutflow41_isolEMHadDepth1;   //!
   TBranch        *b_HEEP_cutflow41_isolEMHadDepth1_n;   //!
   TBranch        *b_HEEP_cutflow41_isolEMHadDepth1_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_isolEMHadDepth1_value;   //!
   TBranch        *b_HEEP_cutflow41_IsolPtTrks;   //!
   TBranch        *b_HEEP_cutflow41_IsolPtTrks_n;   //!
   TBranch        *b_HEEP_cutflow41_IsolPtTrks_nCumulative;   //!
   TBranch        *b_HEEP_cutflow41_IsolPtTrks_value;   //!
   TBranch        *b_HEEP_cutflow41_isolation;   //!
   TBranch        *b_HEEP_cutflow41_isolation_n;   //!
   TBranch        *b_HEEP_cutflow41_total;   //!
   TBranch        *b_HEEP_cutflow41_total_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_Et;   //!
   TBranch        *b_HEEP_cutflow50_50ns_Et_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_Et_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_Et_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_eta;   //!
   TBranch        *b_HEEP_cutflow50_50ns_eta_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_eta_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_eta_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_EcalDriven;   //!
   TBranch        *b_HEEP_cutflow50_50ns_EcalDriven_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_EcalDriven_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_EcalDriven_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dEtaIn;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dEtaIn_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dEtaIn_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dEtaIn_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dPhiIn;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dPhiIn_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dPhiIn_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dPhiIn_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_HOverE;   //!
   TBranch        *b_HEEP_cutflow50_50ns_HOverE_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_HOverE_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_HOverE_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_SigmaIetaIeta;   //!
   TBranch        *b_HEEP_cutflow50_50ns_SigmaIetaIeta_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_SigmaIetaIeta_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_SigmaIetaIeta_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E1x5OverE5x5;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E1x5OverE5x5_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E1x5OverE5x5_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E1x5OverE5x5_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E2x5OverE5x5;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E2x5OverE5x5_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E2x5OverE5x5_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_E2x5OverE5x5_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_missingHits;   //!
   TBranch        *b_HEEP_cutflow50_50ns_missingHits_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_missingHits_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_missingHits_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dxyFirstPV;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dxyFirstPV_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dxyFirstPV_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_dxyFirstPV_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_ID;   //!
   TBranch        *b_HEEP_cutflow50_50ns_ID_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_isolEMHadDepth1;   //!
   TBranch        *b_HEEP_cutflow50_50ns_isolEMHadDepth1_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_isolEMHadDepth1_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_isolEMHadDepth1_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_IsolPtTrks;   //!
   TBranch        *b_HEEP_cutflow50_50ns_IsolPtTrks_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_IsolPtTrks_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_50ns_IsolPtTrks_value;   //!
   TBranch        *b_HEEP_cutflow50_50ns_isolation;   //!
   TBranch        *b_HEEP_cutflow50_50ns_isolation_n;   //!
   TBranch        *b_HEEP_cutflow50_50ns_total;   //!
   TBranch        *b_HEEP_cutflow50_50ns_total_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_Et;   //!
   TBranch        *b_HEEP_cutflow50_25ns_Et_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_Et_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_Et_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_eta;   //!
   TBranch        *b_HEEP_cutflow50_25ns_eta_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_eta_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_eta_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_EcalDriven;   //!
   TBranch        *b_HEEP_cutflow50_25ns_EcalDriven_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_EcalDriven_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_EcalDriven_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dEtaIn;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dEtaIn_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dEtaIn_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dEtaIn_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dPhiIn;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dPhiIn_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dPhiIn_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dPhiIn_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_HOverE;   //!
   TBranch        *b_HEEP_cutflow50_25ns_HOverE_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_HOverE_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_HOverE_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_SigmaIetaIeta;   //!
   TBranch        *b_HEEP_cutflow50_25ns_SigmaIetaIeta_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_SigmaIetaIeta_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_SigmaIetaIeta_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E1x5OverE5x5;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E1x5OverE5x5_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E1x5OverE5x5_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E1x5OverE5x5_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E2x5OverE5x5;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E2x5OverE5x5_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E2x5OverE5x5_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_E2x5OverE5x5_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_missingHits;   //!
   TBranch        *b_HEEP_cutflow50_25ns_missingHits_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_missingHits_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_missingHits_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dxyFirstPV;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dxyFirstPV_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dxyFirstPV_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_dxyFirstPV_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_ID;   //!
   TBranch        *b_HEEP_cutflow50_25ns_ID_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_isolEMHadDepth1;   //!
   TBranch        *b_HEEP_cutflow50_25ns_isolEMHadDepth1_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_isolEMHadDepth1_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_isolEMHadDepth1_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_IsolPtTrks;   //!
   TBranch        *b_HEEP_cutflow50_25ns_IsolPtTrks_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_IsolPtTrks_nCumulative;   //!
   TBranch        *b_HEEP_cutflow50_25ns_IsolPtTrks_value;   //!
   TBranch        *b_HEEP_cutflow50_25ns_isolation;   //!
   TBranch        *b_HEEP_cutflow50_25ns_isolation_n;   //!
   TBranch        *b_HEEP_cutflow50_25ns_total;   //!
   TBranch        *b_HEEP_cutflow50_25ns_total_n;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_index;   //!
   TBranch        *b_mc_pdgId;   //!
   TBranch        *b_mc_charge;   //!
   TBranch        *b_mc_status;   //!
   TBranch        *b_mc_mass;   //!
   TBranch        *b_mc_px;   //!
   TBranch        *b_mc_py;   //!
   TBranch        *b_mc_pz;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_energy;   //!
   TBranch        *b_mc_numberOfDaughters;   //!
   TBranch        *b_mc_numberOfMothers;   //!
   TBranch        *b_mc_mother_index;   //!
   TBranch        *b_mc_mother_pdgId;   //!
   TBranch        *b_mc_mother_px;   //!
   TBranch        *b_mc_mother_py;   //!
   TBranch        *b_mc_mother_pz;   //!
   TBranch        *b_mc_mother_pt;   //!
   TBranch        *b_mc_mother_eta;   //!
   TBranch        *b_mc_mother_phi;   //!
   TBranch        *b_mc_mother_energy;   //!
   TBranch        *b_mc_mother_mass;   //!
   TBranch        *b_gsf_triggerMatch_hltL1sL1SingleEG12;   //!
   TBranch        *b_gsf_triggerMatch_hltL1sL1Mu3p5EG12;   //!
   TBranch        *b_gsf_triggerMatch_hltL1sL1SingleEG22;   //!
   TBranch        *b_gsf_triggerMatch_hltEle33CaloIdLPixelMatchFilter;   //!
   TBranch        *b_gsf_triggerMatch_hltDiEle33CaloIdLGsfTrkIdVLDPhiDoubleFilter;   //!
   TBranch        *b_gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoFilter;   //!
   TBranch        *b_gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoDoubleFilter;   //!
   TBranch        *b_gsf_triggerMatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17TrackIsoFilter;   //!
   TBranch        *b_gsf_triggerMatch_hltEle27WP80TrackIsoFilter;   //!
   TBranch        *b_gsf_triggerMatch_hltMu22Photon22CaloIdLHEFilter;   //!
   TBranch        *b_hltL1sMu16Eta2p1;   //!
   TBranch        *b_hltL1sL1Mu3p5EG12;   //!
   TBranch        *b_hltL1Mu3p5EG12L3Filtered22;   //!
   TBranch        *b_hltL3fL1sMu16Eta2p1L1f0L2f16QL3Filtered40Q;   //!

   Analyzer(TTree *tree=0);
   virtual ~Analyzer();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Analyzer_cxx
Analyzer::Analyzer(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("outfile_1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("outfile_1.root");
      }
      f->GetObject("IIHEAnalysis",tree);

   }
   Init(tree);
}

Analyzer::~Analyzer()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analyzer::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analyzer::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analyzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   pv_x = 0;
   pv_y = 0;
   pv_z = 0;
   pv_isValid = 0;
   pv_normalizedChi2 = 0;
   pv_ndof = 0;
   pv_nTracks = 0;
   pv_totTrackSize = 0;
   sc_energy = 0;
   sc_eta = 0;
   sc_etacorr = 0;
   sc_theta = 0;
   sc_thetacorr = 0;
   sc_et = 0;
   sc_phi = 0;
   sc_px = 0;
   sc_py = 0;
   sc_pz = 0;
   sc_x = 0;
   sc_y = 0;
   sc_z = 0;
   scmatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17PMMassFilter = 0;
   ph_isPFlowPhoton = 0;
   ph_isStandardPhoton = 0;
   ph_hasConversionTracks = 0;
   ph_hasPixelSeed = 0;
   ph_isEB = 0;
   ph_isEE = 0;
   ph_isEBGap = 0;
   ph_isEBEtaGap = 0;
   ph_isEBPhiGap = 0;
   ph_isEEGap = 0;
   ph_isEERingGap = 0;
   ph_isEEDeeGap = 0;
   ph_isEBEEGap = 0;
   ph_hadronicOverEm = 0;
   ph_hadronicDepth1OverEm = 0;
   ph_hadronicDepth2OverEm = 0;
   ph_hadTowOverEm = 0;
   ph_hadTowDepth1OverEm = 0;
   ph_hadTowDepth2OverEm = 0;
   ph_e1x5 = 0;
   ph_e2x5 = 0;
   ph_e3x3 = 0;
   ph_e5x5 = 0;
   ph_maxEnergyXtal = 0;
   ph_sigmaEtaEta = 0;
   ph_sigmaIetaIeta = 0;
   ph_r1x5 = 0;
   ph_r2x5 = 0;
   ph_r9 = 0;
   ph_mipChi2 = 0;
   ph_mipTotEnergy = 0;
   ph_mipSlope = 0;
   ph_mipIntercept = 0;
   ph_mipNhitCone = 0;
   ph_mipIsHalo = 0;
   ph_ecalRecHitSumEtConeDR04 = 0;
   ph_hcalTowerSumEtConeDR04 = 0;
   ph_hcalDepth1TowerSumEtConeDR04 = 0;
   ph_hcalDepth2TowerSumEtConeDR04 = 0;
   ph_hcalTowerSumEtBcConeDR04 = 0;
   ph_hcalDepth1TowerSumEtBcConeDR04 = 0;
   ph_hcalDepth2TowerSumEtBcConeDR04 = 0;
   ph_trkSumPtSolidConeDR04 = 0;
   ph_trkSumPtHollowConeDR04 = 0;
   ph_nTrkSolidConeDR04 = 0;
   ph_nTrkHollowConeDR04 = 0;
   ph_ecalRecHitSumEtConeDR03 = 0;
   ph_hcalTowerSumEtConeDR03 = 0;
   ph_hcalDepth1TowerSumEtConeDR03 = 0;
   ph_hcalDepth2TowerSumEtConeDR03 = 0;
   ph_hcalTowerSumEtBcConeDR03 = 0;
   ph_hcalDepth1TowerSumEtBcConeDR03 = 0;
   ph_hcalDepth2TowerSumEtBcConeDR03 = 0;
   ph_trkSumPtSolidConeDR03 = 0;
   ph_trkSumPtHollowConeDR03 = 0;
   ph_nTrkSolidConeDR03 = 0;
   ph_nTrkHollowConeDR03 = 0;
   ph_chargedHadronIso = 0;
   ph_chargedHadronIsoWrongVtx = 0;
   ph_neutralHadronIso = 0;
   ph_photonIso = 0;
   ph_sumChargedParticlePt = 0;
   ph_sumNeutralHadronEtHighThreshold = 0;
   ph_sumPhotonEtHighThreshold = 0;
   ph_sumPUPt = 0;
   ph_nClusterOutsideMustache = 0;
   ph_etOutsideMustache = 0;
   ph_pfMVA = 0;
   gsf_classification = 0;
   gsf_energy = 0;
   gsf_p = 0;
   gsf_pt = 0;
   gsf_scE1x5 = 0;
   gsf_scE5x5 = 0;
   gsf_scE2x5Max = 0;
   gsf_eta = 0;
   gsf_phi = 0;
   gsf_theta = 0;
   gsf_px = 0;
   gsf_py = 0;
   gsf_pz = 0;
   gsf_superClusterEta = 0;
   gsf_superClusterEnergy = 0;
   gsf_caloEnergy = 0;
   gsf_deltaEtaSuperClusterTrackAtVtx = 0;
   gsf_deltaPhiSuperClusterTrackAtVtx = 0;
   gsf_hadronicOverEm = 0;
   gsf_hcalDepth1OverEcal = 0;
   gsf_hcalDepth2OverEcal = 0;
   gsf_dr03TkSumPt = 0;
   gsf_dr03EcalRecHitSumEt = 0;
   gsf_dr03HcalDepth1TowerSumEt = 0;
   gsf_dr03HcalDepth2TowerSumEt = 0;
   gsf_charge = 0;
   gsf_sigmaIetaIeta = 0;
   gsf_ecaldrivenSeed = 0;
   gsf_trackerdrivenSeed = 0;
   gsf_isEB = 0;
   gsf_isEE = 0;
   gsf_deltaEtaSeedClusterTrackAtCalo = 0;
   gsf_deltaPhiSeedClusterTrackAtCalo = 0;
   gsf_ecalEnergy = 0;
   gsf_eSuperClusterOverP = 0;
   gsf_dxy = 0;
   gsf_dxy_beamSpot = 0;
   gsf_dxy_firstPVtx = 0;
   gsf_dxyError = 0;
   gsf_dz = 0;
   gsf_dz_beamSpot = 0;
   gsf_dz_firstPVtx = 0;
   gsf_dzError = 0;
   gsf_vz = 0;
   gsf_numberOfValidHits = 0;
   gsf_nLostInnerHits = 0;
   gsf_nLostOuterHits = 0;
   gsf_convFlags = 0;
   gsf_convDist = 0;
   gsf_convDcot = 0;
   gsf_convRadius = 0;
   gsf_fBrem = 0;
   gsf_e1x5 = 0;
   gsf_e2x5Max = 0;
   gsf_e5x5 = 0;
   gsf_r9 = 0;
   gsf_hitsinfo = 0;
   muon_charge = 0;
   muon_qoverp = 0;
   muon_pt = 0;
   muon_eta = 0;
   muon_phi = 0;
   muon_p = 0;
   muon_px = 0;
   muon_py = 0;
   muon_pz = 0;
   muon_theta = 0;
   muon_lambda = 0;
   muon_dxy = 0;
   muon_d0 = 0;
   muon_dsz = 0;
   muon_dz = 0;
   muon_dxy_beamSpot = 0;
   muon_dxy_firstPVtx = 0;
   muon_dz_beamSpot = 0;
   muon_dz_firstPVtx = 0;
   muon_vx = 0;
   muon_vy = 0;
   muon_vz = 0;
   muon_outerPt = 0;
   muon_outerEta = 0;
   muon_outerPhi = 0;
   muon_outerTheta = 0;
   muon_numberOfValidPixelHits = 0;
   muon_numberOfValidTrackerHits = 0;
   muon_numberOfValidMuonHits = 0;
   muon_numberOfValidHits = 0;
   muon_trackerLayersWithMeasurement = 0;
   muon_numberOfLostHits = 0;
   muon_numberOfMatchedStations = 0;
   muon_validFraction = 0;
   muon_isGlobalMuon = 0;
   muon_isTrackerMuon = 0;
   muon_isPFMuon = 0;
   muon_isPFIsolationValid = 0;
   muon_chi2 = 0;
   muon_ndof = 0;
   muon_normalizedChi2 = 0;
   muon_qoverpError = 0;
   muon_ptError = 0;
   muon_thetaError = 0;
   muon_lambdaError = 0;
   muon_phiError = 0;
   muon_dxyError = 0;
   muon_d0Error = 0;
   muon_dszError = 0;
   muon_dzError = 0;
   muon_isolationR03_sumPt = 0;
   muon_isolationR03_trackerVetoPt = 0;
   muon_isolationR03_emEt = 0;
   muon_isolationR03_emVetoEt = 0;
   muon_isolationR03_hadEt = 0;
   muon_isolationR03_hadVetoEt = 0;
   muon_isolationR05_sumPt = 0;
   muon_isolationR05_trackerVetoPt = 0;
   muon_isolationR05_emEt = 0;
   muon_isolationR05_emVetoEt = 0;
   muon_isolationR05_hadEt = 0;
   muon_isolationR05_hadVetoEt = 0;
   muon_pfIsolationR03_sumChargedHadronPt = 0;
   muon_pfIsolationR03_sumChargedParticlePt = 0;
   muon_pfIsolationR03_sumPhotonEt = 0;
   muon_pfIsolationR03_sumNeutralHadronEtHighThreshold = 0;
   muon_pfIsolationR03_sumPhotonEtHighThreshold = 0;
   muon_pfIsolationR03_sumPUPt = 0;
   muon_pfIsolationR04_sumChargedHadronPt = 0;
   muon_pfIsolationR04_sumChargedParticlePt = 0;
   muon_pfIsolationR04_sumPhotonEt = 0;
   muon_pfIsolationR04_sumNeutralHadronEtHighThreshold = 0;
   muon_pfIsolationR04_sumPhotonEtHighThreshold = 0;
   muon_pfIsolationR04_sumPUPt = 0;
   muon_pfMeanDRIsoProfileR03_sumChargedHadronPt = 0;
   muon_pfMeanDRIsoProfileR03_sumChargedParticlePt = 0;
   muon_pfMeanDRIsoProfileR03_sumPhotonEt = 0;
   muon_pfMeanDRIsoProfileR03_sumNeutralHadronEtHighThreshold = 0;
   muon_pfMeanDRIsoProfileR03_sumPhotonEtHighThreshold = 0;
   muon_pfMeanDRIsoProfileR03_sumPUPt = 0;
   muon_pfMeanDRIsoProfileR04_sumChargedHadronPt = 0;
   muon_pfMeanDRIsoProfileR04_sumChargedParticlePt = 0;
   muon_pfMeanDRIsoProfileR04_sumPhotonEt = 0;
   muon_pfMeanDRIsoProfileR04_sumNeutralHadronEtHighThreshold = 0;
   muon_pfMeanDRIsoProfileR04_sumPhotonEtHighThreshold = 0;
   muon_pfMeanDRIsoProfileR04_sumPUPt = 0;
   muon_innerPosition_x = 0;
   muon_innerPosition_y = 0;
   muon_innerPosition_z = 0;
   muon_tevOptimized_charge = 0;
   muon_tevOptimized_pt = 0;
   muon_tevOptimized_eta = 0;
   muon_tevOptimized_phi = 0;
   muon_tevOptimized_theta = 0;
   muon_tevOptimized_px = 0;
   muon_tevOptimized_py = 0;
   muon_tevOptimized_pz = 0;
   muon_tevOptimized_d0 = 0;
   muon_tevOptimized_dz = 0;
   muon_tevOptimized_dz_beamSpot = 0;
   muon_tevOptimized_dz_firstPVtx = 0;
   muon_tevOptimized_dxy = 0;
   muon_tevOptimized_dxy_beamSpot = 0;
   muon_tevOptimized_dxy_firstPVtx = 0;
   muon_tevOptimized_ptError = 0;
   muon_tevOptimized_etaError = 0;
   muon_tevOptimized_phiError = 0;
   muon_tevOptimized_thetaError = 0;
   muon_tevOptimized_d0Error = 0;
   muon_tevOptimized_dzError = 0;
   muon_tevOptimized_dxyError = 0;
   HEEP_eseffsixix = 0;
   HEEP_eseffsiyiy = 0;
   HEEP_eseffsirir = 0;
   HEEP_preshowerEnergy = 0;
   HEEP_e1x3 = 0;
   HEEP_crystal_energy = 0;
   HEEP_crystal_eta = 0;
   HEEP_eshitsixix = 0;
   HEEP_eshitsiyiy = 0;
   HEEP_crystal_ietaorix = 0;
   HEEP_crystal_iphioriy = 0;
   HEEP_cutflow41_Et = 0;
   HEEP_cutflow41_Et_value = 0;
   HEEP_cutflow41_eta = 0;
   HEEP_cutflow41_eta_value = 0;
   HEEP_cutflow41_EcalDriven = 0;
   HEEP_cutflow41_EcalDriven_value = 0;
   HEEP_cutflow41_dEtaIn = 0;
   HEEP_cutflow41_dEtaIn_value = 0;
   HEEP_cutflow41_dPhiIn = 0;
   HEEP_cutflow41_dPhiIn_value = 0;
   HEEP_cutflow41_HOverE = 0;
   HEEP_cutflow41_HOverE_value = 0;
   HEEP_cutflow41_SigmaIetaIeta = 0;
   HEEP_cutflow41_SigmaIetaIeta_value = 0;
   HEEP_cutflow41_E1x5OverE5x5 = 0;
   HEEP_cutflow41_E1x5OverE5x5_value = 0;
   HEEP_cutflow41_E2x5OverE5x5 = 0;
   HEEP_cutflow41_E2x5OverE5x5_value = 0;
   HEEP_cutflow41_missingHits = 0;
   HEEP_cutflow41_missingHits_value = 0;
   HEEP_cutflow41_dxyFirstPV = 0;
   HEEP_cutflow41_dxyFirstPV_value = 0;
   HEEP_cutflow41_ID = 0;
   HEEP_cutflow41_isolEMHadDepth1 = 0;
   HEEP_cutflow41_isolEMHadDepth1_value = 0;
   HEEP_cutflow41_IsolPtTrks = 0;
   HEEP_cutflow41_IsolPtTrks_value = 0;
   HEEP_cutflow41_isolation = 0;
   HEEP_cutflow41_total = 0;
   HEEP_cutflow50_50ns_Et = 0;
   HEEP_cutflow50_50ns_Et_value = 0;
   HEEP_cutflow50_50ns_eta = 0;
   HEEP_cutflow50_50ns_eta_value = 0;
   HEEP_cutflow50_50ns_EcalDriven = 0;
   HEEP_cutflow50_50ns_EcalDriven_value = 0;
   HEEP_cutflow50_50ns_dEtaIn = 0;
   HEEP_cutflow50_50ns_dEtaIn_value = 0;
   HEEP_cutflow50_50ns_dPhiIn = 0;
   HEEP_cutflow50_50ns_dPhiIn_value = 0;
   HEEP_cutflow50_50ns_HOverE = 0;
   HEEP_cutflow50_50ns_HOverE_value = 0;
   HEEP_cutflow50_50ns_SigmaIetaIeta = 0;
   HEEP_cutflow50_50ns_SigmaIetaIeta_value = 0;
   HEEP_cutflow50_50ns_E1x5OverE5x5 = 0;
   HEEP_cutflow50_50ns_E1x5OverE5x5_value = 0;
   HEEP_cutflow50_50ns_E2x5OverE5x5 = 0;
   HEEP_cutflow50_50ns_E2x5OverE5x5_value = 0;
   HEEP_cutflow50_50ns_missingHits = 0;
   HEEP_cutflow50_50ns_missingHits_value = 0;
   HEEP_cutflow50_50ns_dxyFirstPV = 0;
   HEEP_cutflow50_50ns_dxyFirstPV_value = 0;
   HEEP_cutflow50_50ns_ID = 0;
   HEEP_cutflow50_50ns_isolEMHadDepth1 = 0;
   HEEP_cutflow50_50ns_isolEMHadDepth1_value = 0;
   HEEP_cutflow50_50ns_IsolPtTrks = 0;
   HEEP_cutflow50_50ns_IsolPtTrks_value = 0;
   HEEP_cutflow50_50ns_isolation = 0;
   HEEP_cutflow50_50ns_total = 0;
   HEEP_cutflow50_25ns_Et = 0;
   HEEP_cutflow50_25ns_Et_value = 0;
   HEEP_cutflow50_25ns_eta = 0;
   HEEP_cutflow50_25ns_eta_value = 0;
   HEEP_cutflow50_25ns_EcalDriven = 0;
   HEEP_cutflow50_25ns_EcalDriven_value = 0;
   HEEP_cutflow50_25ns_dEtaIn = 0;
   HEEP_cutflow50_25ns_dEtaIn_value = 0;
   HEEP_cutflow50_25ns_dPhiIn = 0;
   HEEP_cutflow50_25ns_dPhiIn_value = 0;
   HEEP_cutflow50_25ns_HOverE = 0;
   HEEP_cutflow50_25ns_HOverE_value = 0;
   HEEP_cutflow50_25ns_SigmaIetaIeta = 0;
   HEEP_cutflow50_25ns_SigmaIetaIeta_value = 0;
   HEEP_cutflow50_25ns_E1x5OverE5x5 = 0;
   HEEP_cutflow50_25ns_E1x5OverE5x5_value = 0;
   HEEP_cutflow50_25ns_E2x5OverE5x5 = 0;
   HEEP_cutflow50_25ns_E2x5OverE5x5_value = 0;
   HEEP_cutflow50_25ns_missingHits = 0;
   HEEP_cutflow50_25ns_missingHits_value = 0;
   HEEP_cutflow50_25ns_dxyFirstPV = 0;
   HEEP_cutflow50_25ns_dxyFirstPV_value = 0;
   HEEP_cutflow50_25ns_ID = 0;
   HEEP_cutflow50_25ns_isolEMHadDepth1 = 0;
   HEEP_cutflow50_25ns_isolEMHadDepth1_value = 0;
   HEEP_cutflow50_25ns_IsolPtTrks = 0;
   HEEP_cutflow50_25ns_IsolPtTrks_value = 0;
   HEEP_cutflow50_25ns_isolation = 0;
   HEEP_cutflow50_25ns_total = 0;
   mc_index = 0;
   mc_pdgId = 0;
   mc_charge = 0;
   mc_status = 0;
   mc_mass = 0;
   mc_px = 0;
   mc_py = 0;
   mc_pz = 0;
   mc_pt = 0;
   mc_eta = 0;
   mc_phi = 0;
   mc_energy = 0;
   mc_numberOfDaughters = 0;
   mc_numberOfMothers = 0;
   mc_mother_index = 0;
   mc_mother_pdgId = 0;
   mc_mother_px = 0;
   mc_mother_py = 0;
   mc_mother_pz = 0;
   mc_mother_pt = 0;
   mc_mother_eta = 0;
   mc_mother_phi = 0;
   mc_mother_energy = 0;
   mc_mother_mass = 0;
   gsf_triggerMatch_hltL1sL1SingleEG12 = 0;
   gsf_triggerMatch_hltL1sL1Mu3p5EG12 = 0;
   gsf_triggerMatch_hltL1sL1SingleEG22 = 0;
   gsf_triggerMatch_hltEle33CaloIdLPixelMatchFilter = 0;
   gsf_triggerMatch_hltDiEle33CaloIdLGsfTrkIdVLDPhiDoubleFilter = 0;
   gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoFilter = 0;
   gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoDoubleFilter = 0;
   gsf_triggerMatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17TrackIsoFilter = 0;
   gsf_triggerMatch_hltEle27WP80TrackIsoFilter = 0;
   gsf_triggerMatch_hltMu22Photon22CaloIdLHEFilter = 0;
   hltL1sMu16Eta2p1 = 0;
   hltL1sL1Mu3p5EG12 = 0;
   hltL1Mu3p5EG12L3Filtered22 = 0;
   hltL3fL1sMu16Eta2p1L1f0L2f16QL3Filtered40Q = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("ev_event", &ev_event, &b_ev_event);
   fChain->SetBranchAddress("ev_run", &ev_run, &b_ev_run);
   fChain->SetBranchAddress("ev_luminosityBlock", &ev_luminosityBlock, &b_ev_luminosityBlock);
   fChain->SetBranchAddress("pv_n", &pv_n, &b_pv_n);
   fChain->SetBranchAddress("pv_x", &pv_x, &b_pv_x);
   fChain->SetBranchAddress("pv_y", &pv_y, &b_pv_y);
   fChain->SetBranchAddress("pv_z", &pv_z, &b_pv_z);
   fChain->SetBranchAddress("pv_isValid", &pv_isValid, &b_pv_isValid);
   fChain->SetBranchAddress("pv_normalizedChi2", &pv_normalizedChi2, &b_pv_normalizedChi2);
   fChain->SetBranchAddress("pv_ndof", &pv_ndof, &b_pv_ndof);
   fChain->SetBranchAddress("pv_nTracks", &pv_nTracks, &b_pv_nTracks);
   fChain->SetBranchAddress("pv_totTrackSize", &pv_totTrackSize, &b_pv_totTrackSize);
   fChain->SetBranchAddress("sc_n", &sc_n, &b_sc_n);
   fChain->SetBranchAddress("sc_energy", &sc_energy, &b_sc_energy);
   fChain->SetBranchAddress("sc_eta", &sc_eta, &b_sc_eta);
   fChain->SetBranchAddress("sc_etacorr", &sc_etacorr, &b_sc_etacorr);
   fChain->SetBranchAddress("sc_theta", &sc_theta, &b_sc_theta);
   fChain->SetBranchAddress("sc_thetacorr", &sc_thetacorr, &b_sc_thetacorr);
   fChain->SetBranchAddress("sc_et", &sc_et, &b_sc_et);
   fChain->SetBranchAddress("sc_phi", &sc_phi, &b_sc_phi);
   fChain->SetBranchAddress("sc_px", &sc_px, &b_sc_px);
   fChain->SetBranchAddress("sc_py", &sc_py, &b_sc_py);
   fChain->SetBranchAddress("sc_pz", &sc_pz, &b_sc_pz);
   fChain->SetBranchAddress("sc_x", &sc_x, &b_sc_x);
   fChain->SetBranchAddress("sc_y", &sc_y, &b_sc_y);
   fChain->SetBranchAddress("sc_z", &sc_z, &b_sc_z);
   fChain->SetBranchAddress("scmatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17PMMassFilter", &scmatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17PMMassFilter, &b_scmatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17PMMassFilter);
   fChain->SetBranchAddress("ph_n", &ph_n, &b_ph_n);
   fChain->SetBranchAddress("ph_isPFlowPhoton", &ph_isPFlowPhoton, &b_ph_isPFlowPhoton);
   fChain->SetBranchAddress("ph_isStandardPhoton", &ph_isStandardPhoton, &b_ph_isStandardPhoton);
   fChain->SetBranchAddress("ph_hasConversionTracks", &ph_hasConversionTracks, &b_ph_hasConversionTracks);
   fChain->SetBranchAddress("ph_hasPixelSeed", &ph_hasPixelSeed, &b_ph_hasPixelSeed);
   fChain->SetBranchAddress("ph_isEB", &ph_isEB, &b_ph_isEB);
   fChain->SetBranchAddress("ph_isEE", &ph_isEE, &b_ph_isEE);
   fChain->SetBranchAddress("ph_isEBGap", &ph_isEBGap, &b_ph_isEBGap);
   fChain->SetBranchAddress("ph_isEBEtaGap", &ph_isEBEtaGap, &b_ph_isEBEtaGap);
   fChain->SetBranchAddress("ph_isEBPhiGap", &ph_isEBPhiGap, &b_ph_isEBPhiGap);
   fChain->SetBranchAddress("ph_isEEGap", &ph_isEEGap, &b_ph_isEEGap);
   fChain->SetBranchAddress("ph_isEERingGap", &ph_isEERingGap, &b_ph_isEERingGap);
   fChain->SetBranchAddress("ph_isEEDeeGap", &ph_isEEDeeGap, &b_ph_isEEDeeGap);
   fChain->SetBranchAddress("ph_isEBEEGap", &ph_isEBEEGap, &b_ph_isEBEEGap);
   fChain->SetBranchAddress("ph_hadronicOverEm", &ph_hadronicOverEm, &b_ph_hadronicOverEm);
   fChain->SetBranchAddress("ph_hadronicDepth1OverEm", &ph_hadronicDepth1OverEm, &b_ph_hadronicDepth1OverEm);
   fChain->SetBranchAddress("ph_hadronicDepth2OverEm", &ph_hadronicDepth2OverEm, &b_ph_hadronicDepth2OverEm);
   fChain->SetBranchAddress("ph_hadTowOverEm", &ph_hadTowOverEm, &b_ph_hadTowOverEm);
   fChain->SetBranchAddress("ph_hadTowDepth1OverEm", &ph_hadTowDepth1OverEm, &b_ph_hadTowDepth1OverEm);
   fChain->SetBranchAddress("ph_hadTowDepth2OverEm", &ph_hadTowDepth2OverEm, &b_ph_hadTowDepth2OverEm);
   fChain->SetBranchAddress("ph_e1x5", &ph_e1x5, &b_ph_e1x5);
   fChain->SetBranchAddress("ph_e2x5", &ph_e2x5, &b_ph_e2x5);
   fChain->SetBranchAddress("ph_e3x3", &ph_e3x3, &b_ph_e3x3);
   fChain->SetBranchAddress("ph_e5x5", &ph_e5x5, &b_ph_e5x5);
   fChain->SetBranchAddress("ph_maxEnergyXtal", &ph_maxEnergyXtal, &b_ph_maxEnergyXtal);
   fChain->SetBranchAddress("ph_sigmaEtaEta", &ph_sigmaEtaEta, &b_ph_sigmaEtaEta);
   fChain->SetBranchAddress("ph_sigmaIetaIeta", &ph_sigmaIetaIeta, &b_ph_sigmaIetaIeta);
   fChain->SetBranchAddress("ph_r1x5", &ph_r1x5, &b_ph_r1x5);
   fChain->SetBranchAddress("ph_r2x5", &ph_r2x5, &b_ph_r2x5);
   fChain->SetBranchAddress("ph_r9", &ph_r9, &b_ph_r9);
   fChain->SetBranchAddress("ph_mipChi2", &ph_mipChi2, &b_ph_mipChi2);
   fChain->SetBranchAddress("ph_mipTotEnergy", &ph_mipTotEnergy, &b_ph_mipTotEnergy);
   fChain->SetBranchAddress("ph_mipSlope", &ph_mipSlope, &b_ph_mipSlope);
   fChain->SetBranchAddress("ph_mipIntercept", &ph_mipIntercept, &b_ph_mipIntercept);
   fChain->SetBranchAddress("ph_mipNhitCone", &ph_mipNhitCone, &b_ph_mipNhitCone);
   fChain->SetBranchAddress("ph_mipIsHalo", &ph_mipIsHalo, &b_ph_mipIsHalo);
   fChain->SetBranchAddress("ph_ecalRecHitSumEtConeDR04", &ph_ecalRecHitSumEtConeDR04, &b_ph_ecalRecHitSumEtConeDR04);
   fChain->SetBranchAddress("ph_hcalTowerSumEtConeDR04", &ph_hcalTowerSumEtConeDR04, &b_ph_hcalTowerSumEtConeDR04);
   fChain->SetBranchAddress("ph_hcalDepth1TowerSumEtConeDR04", &ph_hcalDepth1TowerSumEtConeDR04, &b_ph_hcalDepth1TowerSumEtConeDR04);
   fChain->SetBranchAddress("ph_hcalDepth2TowerSumEtConeDR04", &ph_hcalDepth2TowerSumEtConeDR04, &b_ph_hcalDepth2TowerSumEtConeDR04);
   fChain->SetBranchAddress("ph_hcalTowerSumEtBcConeDR04", &ph_hcalTowerSumEtBcConeDR04, &b_ph_hcalTowerSumEtBcConeDR04);
   fChain->SetBranchAddress("ph_hcalDepth1TowerSumEtBcConeDR04", &ph_hcalDepth1TowerSumEtBcConeDR04, &b_ph_hcalDepth1TowerSumEtBcConeDR04);
   fChain->SetBranchAddress("ph_hcalDepth2TowerSumEtBcConeDR04", &ph_hcalDepth2TowerSumEtBcConeDR04, &b_ph_hcalDepth2TowerSumEtBcConeDR04);
   fChain->SetBranchAddress("ph_trkSumPtSolidConeDR04", &ph_trkSumPtSolidConeDR04, &b_ph_trkSumPtSolidConeDR04);
   fChain->SetBranchAddress("ph_trkSumPtHollowConeDR04", &ph_trkSumPtHollowConeDR04, &b_ph_trkSumPtHollowConeDR04);
   fChain->SetBranchAddress("ph_nTrkSolidConeDR04", &ph_nTrkSolidConeDR04, &b_ph_nTrkSolidConeDR04);
   fChain->SetBranchAddress("ph_nTrkHollowConeDR04", &ph_nTrkHollowConeDR04, &b_ph_nTrkHollowConeDR04);
   fChain->SetBranchAddress("ph_ecalRecHitSumEtConeDR03", &ph_ecalRecHitSumEtConeDR03, &b_ph_ecalRecHitSumEtConeDR03);
   fChain->SetBranchAddress("ph_hcalTowerSumEtConeDR03", &ph_hcalTowerSumEtConeDR03, &b_ph_hcalTowerSumEtConeDR03);
   fChain->SetBranchAddress("ph_hcalDepth1TowerSumEtConeDR03", &ph_hcalDepth1TowerSumEtConeDR03, &b_ph_hcalDepth1TowerSumEtConeDR03);
   fChain->SetBranchAddress("ph_hcalDepth2TowerSumEtConeDR03", &ph_hcalDepth2TowerSumEtConeDR03, &b_ph_hcalDepth2TowerSumEtConeDR03);
   fChain->SetBranchAddress("ph_hcalTowerSumEtBcConeDR03", &ph_hcalTowerSumEtBcConeDR03, &b_ph_hcalTowerSumEtBcConeDR03);
   fChain->SetBranchAddress("ph_hcalDepth1TowerSumEtBcConeDR03", &ph_hcalDepth1TowerSumEtBcConeDR03, &b_ph_hcalDepth1TowerSumEtBcConeDR03);
   fChain->SetBranchAddress("ph_hcalDepth2TowerSumEtBcConeDR03", &ph_hcalDepth2TowerSumEtBcConeDR03, &b_ph_hcalDepth2TowerSumEtBcConeDR03);
   fChain->SetBranchAddress("ph_trkSumPtSolidConeDR03", &ph_trkSumPtSolidConeDR03, &b_ph_trkSumPtSolidConeDR03);
   fChain->SetBranchAddress("ph_trkSumPtHollowConeDR03", &ph_trkSumPtHollowConeDR03, &b_ph_trkSumPtHollowConeDR03);
   fChain->SetBranchAddress("ph_nTrkSolidConeDR03", &ph_nTrkSolidConeDR03, &b_ph_nTrkSolidConeDR03);
   fChain->SetBranchAddress("ph_nTrkHollowConeDR03", &ph_nTrkHollowConeDR03, &b_ph_nTrkHollowConeDR03);
   fChain->SetBranchAddress("ph_chargedHadronIso", &ph_chargedHadronIso, &b_ph_chargedHadronIso);
   fChain->SetBranchAddress("ph_chargedHadronIsoWrongVtx", &ph_chargedHadronIsoWrongVtx, &b_ph_chargedHadronIsoWrongVtx);
   fChain->SetBranchAddress("ph_neutralHadronIso", &ph_neutralHadronIso, &b_ph_neutralHadronIso);
   fChain->SetBranchAddress("ph_photonIso", &ph_photonIso, &b_ph_photonIso);
   fChain->SetBranchAddress("ph_sumChargedParticlePt", &ph_sumChargedParticlePt, &b_ph_sumChargedParticlePt);
   fChain->SetBranchAddress("ph_sumNeutralHadronEtHighThreshold", &ph_sumNeutralHadronEtHighThreshold, &b_ph_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("ph_sumPhotonEtHighThreshold", &ph_sumPhotonEtHighThreshold, &b_ph_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("ph_sumPUPt", &ph_sumPUPt, &b_ph_sumPUPt);
   fChain->SetBranchAddress("ph_nClusterOutsideMustache", &ph_nClusterOutsideMustache, &b_ph_nClusterOutsideMustache);
   fChain->SetBranchAddress("ph_etOutsideMustache", &ph_etOutsideMustache, &b_ph_etOutsideMustache);
   fChain->SetBranchAddress("ph_pfMVA", &ph_pfMVA, &b_ph_pfMVA);
   fChain->SetBranchAddress("gsf_n", &gsf_n, &b_gsf_n);
   fChain->SetBranchAddress("gsf_classification", &gsf_classification, &b_gsf_classification);
   fChain->SetBranchAddress("gsf_energy", &gsf_energy, &b_gsf_energy);
   fChain->SetBranchAddress("gsf_p", &gsf_p, &b_gsf_p);
   fChain->SetBranchAddress("gsf_pt", &gsf_pt, &b_gsf_pt);
   fChain->SetBranchAddress("gsf_scE1x5", &gsf_scE1x5, &b_gsf_scE1x5);
   fChain->SetBranchAddress("gsf_scE5x5", &gsf_scE5x5, &b_gsf_scE5x5);
   fChain->SetBranchAddress("gsf_scE2x5Max", &gsf_scE2x5Max, &b_gsf_scE2x5Max);
   fChain->SetBranchAddress("gsf_eta", &gsf_eta, &b_gsf_eta);
   fChain->SetBranchAddress("gsf_phi", &gsf_phi, &b_gsf_phi);
   fChain->SetBranchAddress("gsf_theta", &gsf_theta, &b_gsf_theta);
   fChain->SetBranchAddress("gsf_px", &gsf_px, &b_gsf_px);
   fChain->SetBranchAddress("gsf_py", &gsf_py, &b_gsf_py);
   fChain->SetBranchAddress("gsf_pz", &gsf_pz, &b_gsf_pz);
   fChain->SetBranchAddress("gsf_superClusterEta", &gsf_superClusterEta, &b_gsf_superClusterEta);
   fChain->SetBranchAddress("gsf_superClusterEnergy", &gsf_superClusterEnergy, &b_gsf_superClusterEnergy);
   fChain->SetBranchAddress("gsf_caloEnergy", &gsf_caloEnergy, &b_gsf_caloEnergy);
   fChain->SetBranchAddress("gsf_deltaEtaSuperClusterTrackAtVtx", &gsf_deltaEtaSuperClusterTrackAtVtx, &b_gsf_deltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("gsf_deltaPhiSuperClusterTrackAtVtx", &gsf_deltaPhiSuperClusterTrackAtVtx, &b_gsf_deltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("gsf_hadronicOverEm", &gsf_hadronicOverEm, &b_gsf_hadronicOverEm);
   fChain->SetBranchAddress("gsf_hcalDepth1OverEcal", &gsf_hcalDepth1OverEcal, &b_gsf_hcalDepth1OverEcal);
   fChain->SetBranchAddress("gsf_hcalDepth2OverEcal", &gsf_hcalDepth2OverEcal, &b_gsf_hcalDepth2OverEcal);
   fChain->SetBranchAddress("gsf_dr03TkSumPt", &gsf_dr03TkSumPt, &b_gsf_dr03TkSumPt);
   fChain->SetBranchAddress("gsf_dr03EcalRecHitSumEt", &gsf_dr03EcalRecHitSumEt, &b_gsf_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("gsf_dr03HcalDepth1TowerSumEt", &gsf_dr03HcalDepth1TowerSumEt, &b_gsf_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("gsf_dr03HcalDepth2TowerSumEt", &gsf_dr03HcalDepth2TowerSumEt, &b_gsf_dr03HcalDepth2TowerSumEt);
   fChain->SetBranchAddress("gsf_charge", &gsf_charge, &b_gsf_charge);
   fChain->SetBranchAddress("gsf_sigmaIetaIeta", &gsf_sigmaIetaIeta, &b_gsf_sigmaIetaIeta);
   fChain->SetBranchAddress("gsf_ecaldrivenSeed", &gsf_ecaldrivenSeed, &b_gsf_ecaldrivenSeed);
   fChain->SetBranchAddress("gsf_trackerdrivenSeed", &gsf_trackerdrivenSeed, &b_gsf_trackerdrivenSeed);
   fChain->SetBranchAddress("gsf_isEB", &gsf_isEB, &b_gsf_isEB);
   fChain->SetBranchAddress("gsf_isEE", &gsf_isEE, &b_gsf_isEE);
   fChain->SetBranchAddress("gsf_deltaEtaSeedClusterTrackAtCalo", &gsf_deltaEtaSeedClusterTrackAtCalo, &b_gsf_deltaEtaSeedClusterTrackAtCalo);
   fChain->SetBranchAddress("gsf_deltaPhiSeedClusterTrackAtCalo", &gsf_deltaPhiSeedClusterTrackAtCalo, &b_gsf_deltaPhiSeedClusterTrackAtCalo);
   fChain->SetBranchAddress("gsf_ecalEnergy", &gsf_ecalEnergy, &b_gsf_ecalEnergy);
   fChain->SetBranchAddress("gsf_eSuperClusterOverP", &gsf_eSuperClusterOverP, &b_gsf_eSuperClusterOverP);
   fChain->SetBranchAddress("gsf_dxy", &gsf_dxy, &b_gsf_dxy);
   fChain->SetBranchAddress("gsf_dxy_beamSpot", &gsf_dxy_beamSpot, &b_gsf_dxy_beamSpot);
   fChain->SetBranchAddress("gsf_dxy_firstPVtx", &gsf_dxy_firstPVtx, &b_gsf_dxy_firstPVtx);
   fChain->SetBranchAddress("gsf_dxyError", &gsf_dxyError, &b_gsf_dxyError);
   fChain->SetBranchAddress("gsf_dz", &gsf_dz, &b_gsf_dz);
   fChain->SetBranchAddress("gsf_dz_beamSpot", &gsf_dz_beamSpot, &b_gsf_dz_beamSpot);
   fChain->SetBranchAddress("gsf_dz_firstPVtx", &gsf_dz_firstPVtx, &b_gsf_dz_firstPVtx);
   fChain->SetBranchAddress("gsf_dzError", &gsf_dzError, &b_gsf_dzError);
   fChain->SetBranchAddress("gsf_vz", &gsf_vz, &b_gsf_vz);
   fChain->SetBranchAddress("gsf_numberOfValidHits", &gsf_numberOfValidHits, &b_gsf_numberOfValidHits);
   fChain->SetBranchAddress("gsf_nLostInnerHits", &gsf_nLostInnerHits, &b_gsf_nLostInnerHits);
   fChain->SetBranchAddress("gsf_nLostOuterHits", &gsf_nLostOuterHits, &b_gsf_nLostOuterHits);
   fChain->SetBranchAddress("gsf_convFlags", &gsf_convFlags, &b_gsf_convFlags);
   fChain->SetBranchAddress("gsf_convDist", &gsf_convDist, &b_gsf_convDist);
   fChain->SetBranchAddress("gsf_convDcot", &gsf_convDcot, &b_gsf_convDcot);
   fChain->SetBranchAddress("gsf_convRadius", &gsf_convRadius, &b_gsf_convRadius);
   fChain->SetBranchAddress("gsf_fBrem", &gsf_fBrem, &b_gsf_fBrem);
   fChain->SetBranchAddress("gsf_e1x5", &gsf_e1x5, &b_gsf_e1x5);
   fChain->SetBranchAddress("gsf_e2x5Max", &gsf_e2x5Max, &b_gsf_e2x5Max);
   fChain->SetBranchAddress("gsf_e5x5", &gsf_e5x5, &b_gsf_e5x5);
   fChain->SetBranchAddress("gsf_r9", &gsf_r9, &b_gsf_r9);
   fChain->SetBranchAddress("gsf_hitsinfo", &gsf_hitsinfo, &b_gsf_hitsinfo);
   fChain->SetBranchAddress("muon_n", &muon_n, &b_muon_n);
   fChain->SetBranchAddress("muon_charge", &muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_qoverp", &muon_qoverp, &b_muon_qoverp);
   fChain->SetBranchAddress("muon_pt", &muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", &muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_p", &muon_p, &b_muon_p);
   fChain->SetBranchAddress("muon_px", &muon_px, &b_muon_px);
   fChain->SetBranchAddress("muon_py", &muon_py, &b_muon_py);
   fChain->SetBranchAddress("muon_pz", &muon_pz, &b_muon_pz);
   fChain->SetBranchAddress("muon_theta", &muon_theta, &b_muon_theta);
   fChain->SetBranchAddress("muon_lambda", &muon_lambda, &b_muon_lambda);
   fChain->SetBranchAddress("muon_dxy", &muon_dxy, &b_muon_dxy);
   fChain->SetBranchAddress("muon_d0", &muon_d0, &b_muon_d0);
   fChain->SetBranchAddress("muon_dsz", &muon_dsz, &b_muon_dsz);
   fChain->SetBranchAddress("muon_dz", &muon_dz, &b_muon_dz);
   fChain->SetBranchAddress("muon_dxy_beamSpot", &muon_dxy_beamSpot, &b_muon_dxy_beamSpot);
   fChain->SetBranchAddress("muon_dxy_firstPVtx", &muon_dxy_firstPVtx, &b_muon_dxy_firstPVtx);
   fChain->SetBranchAddress("muon_dz_beamSpot", &muon_dz_beamSpot, &b_muon_dz_beamSpot);
   fChain->SetBranchAddress("muon_dz_firstPVtx", &muon_dz_firstPVtx, &b_muon_dz_firstPVtx);
   fChain->SetBranchAddress("muon_vx", &muon_vx, &b_muon_vx);
   fChain->SetBranchAddress("muon_vy", &muon_vy, &b_muon_vy);
   fChain->SetBranchAddress("muon_vz", &muon_vz, &b_muon_vz);
   fChain->SetBranchAddress("muon_outerPt", &muon_outerPt, &b_muon_outerPt);
   fChain->SetBranchAddress("muon_outerEta", &muon_outerEta, &b_muon_outerEta);
   fChain->SetBranchAddress("muon_outerPhi", &muon_outerPhi, &b_muon_outerPhi);
   fChain->SetBranchAddress("muon_outerTheta", &muon_outerTheta, &b_muon_outerTheta);
   fChain->SetBranchAddress("muon_numberOfValidPixelHits", &muon_numberOfValidPixelHits, &b_muon_numberOfValidPixelHits);
   fChain->SetBranchAddress("muon_numberOfValidTrackerHits", &muon_numberOfValidTrackerHits, &b_muon_numberOfValidTrackerHits);
   fChain->SetBranchAddress("muon_numberOfValidMuonHits", &muon_numberOfValidMuonHits, &b_muon_numberOfValidMuonHits);
   fChain->SetBranchAddress("muon_numberOfValidHits", &muon_numberOfValidHits, &b_muon_numberOfValidHits);
   fChain->SetBranchAddress("muon_trackerLayersWithMeasurement", &muon_trackerLayersWithMeasurement, &b_muon_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("muon_numberOfLostHits", &muon_numberOfLostHits, &b_muon_numberOfLostHits);
   fChain->SetBranchAddress("muon_numberOfMatchedStations", &muon_numberOfMatchedStations, &b_muon_numberOfMatchedStations);
   fChain->SetBranchAddress("muon_validFraction", &muon_validFraction, &b_muon_validFraction);
   fChain->SetBranchAddress("muon_isGlobalMuon", &muon_isGlobalMuon, &b_muon_isGlobalMuon);
   fChain->SetBranchAddress("muon_isTrackerMuon", &muon_isTrackerMuon, &b_muon_isTrackerMuon);
   fChain->SetBranchAddress("muon_isPFMuon", &muon_isPFMuon, &b_muon_isPFMuon);
   fChain->SetBranchAddress("muon_isPFIsolationValid", &muon_isPFIsolationValid, &b_muon_isPFIsolationValid);
   fChain->SetBranchAddress("muon_chi2", &muon_chi2, &b_muon_chi2);
   fChain->SetBranchAddress("muon_ndof", &muon_ndof, &b_muon_ndof);
   fChain->SetBranchAddress("muon_normalizedChi2", &muon_normalizedChi2, &b_muon_normalizedChi2);
   fChain->SetBranchAddress("muon_qoverpError", &muon_qoverpError, &b_muon_qoverpError);
   fChain->SetBranchAddress("muon_ptError", &muon_ptError, &b_muon_ptError);
   fChain->SetBranchAddress("muon_thetaError", &muon_thetaError, &b_muon_thetaError);
   fChain->SetBranchAddress("muon_lambdaError", &muon_lambdaError, &b_muon_lambdaError);
   fChain->SetBranchAddress("muon_phiError", &muon_phiError, &b_muon_phiError);
   fChain->SetBranchAddress("muon_dxyError", &muon_dxyError, &b_muon_dxyError);
   fChain->SetBranchAddress("muon_d0Error", &muon_d0Error, &b_muon_d0Error);
   fChain->SetBranchAddress("muon_dszError", &muon_dszError, &b_muon_dszError);
   fChain->SetBranchAddress("muon_dzError", &muon_dzError, &b_muon_dzError);
   fChain->SetBranchAddress("muon_isolationR03_sumPt", &muon_isolationR03_sumPt, &b_muon_isolationR03_sumPt);
   fChain->SetBranchAddress("muon_isolationR03_trackerVetoPt", &muon_isolationR03_trackerVetoPt, &b_muon_isolationR03_trackerVetoPt);
   fChain->SetBranchAddress("muon_isolationR03_emEt", &muon_isolationR03_emEt, &b_muon_isolationR03_emEt);
   fChain->SetBranchAddress("muon_isolationR03_emVetoEt", &muon_isolationR03_emVetoEt, &b_muon_isolationR03_emVetoEt);
   fChain->SetBranchAddress("muon_isolationR03_hadEt", &muon_isolationR03_hadEt, &b_muon_isolationR03_hadEt);
   fChain->SetBranchAddress("muon_isolationR03_hadVetoEt", &muon_isolationR03_hadVetoEt, &b_muon_isolationR03_hadVetoEt);
   fChain->SetBranchAddress("muon_isolationR05_sumPt", &muon_isolationR05_sumPt, &b_muon_isolationR05_sumPt);
   fChain->SetBranchAddress("muon_isolationR05_trackerVetoPt", &muon_isolationR05_trackerVetoPt, &b_muon_isolationR05_trackerVetoPt);
   fChain->SetBranchAddress("muon_isolationR05_emEt", &muon_isolationR05_emEt, &b_muon_isolationR05_emEt);
   fChain->SetBranchAddress("muon_isolationR05_emVetoEt", &muon_isolationR05_emVetoEt, &b_muon_isolationR05_emVetoEt);
   fChain->SetBranchAddress("muon_isolationR05_hadEt", &muon_isolationR05_hadEt, &b_muon_isolationR05_hadEt);
   fChain->SetBranchAddress("muon_isolationR05_hadVetoEt", &muon_isolationR05_hadVetoEt, &b_muon_isolationR05_hadVetoEt);
   fChain->SetBranchAddress("muon_pfIsolationR03_sumChargedHadronPt", &muon_pfIsolationR03_sumChargedHadronPt, &b_muon_pfIsolationR03_sumChargedHadronPt);
   fChain->SetBranchAddress("muon_pfIsolationR03_sumChargedParticlePt", &muon_pfIsolationR03_sumChargedParticlePt, &b_muon_pfIsolationR03_sumChargedParticlePt);
   fChain->SetBranchAddress("muon_pfIsolationR03_sumPhotonEt", &muon_pfIsolationR03_sumPhotonEt, &b_muon_pfIsolationR03_sumPhotonEt);
   fChain->SetBranchAddress("muon_pfIsolationR03_sumNeutralHadronEtHighThreshold", &muon_pfIsolationR03_sumNeutralHadronEtHighThreshold, &b_muon_pfIsolationR03_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("muon_pfIsolationR03_sumPhotonEtHighThreshold", &muon_pfIsolationR03_sumPhotonEtHighThreshold, &b_muon_pfIsolationR03_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("muon_pfIsolationR03_sumPUPt", &muon_pfIsolationR03_sumPUPt, &b_muon_pfIsolationR03_sumPUPt);
   fChain->SetBranchAddress("muon_pfIsolationR04_sumChargedHadronPt", &muon_pfIsolationR04_sumChargedHadronPt, &b_muon_pfIsolationR04_sumChargedHadronPt);
   fChain->SetBranchAddress("muon_pfIsolationR04_sumChargedParticlePt", &muon_pfIsolationR04_sumChargedParticlePt, &b_muon_pfIsolationR04_sumChargedParticlePt);
   fChain->SetBranchAddress("muon_pfIsolationR04_sumPhotonEt", &muon_pfIsolationR04_sumPhotonEt, &b_muon_pfIsolationR04_sumPhotonEt);
   fChain->SetBranchAddress("muon_pfIsolationR04_sumNeutralHadronEtHighThreshold", &muon_pfIsolationR04_sumNeutralHadronEtHighThreshold, &b_muon_pfIsolationR04_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("muon_pfIsolationR04_sumPhotonEtHighThreshold", &muon_pfIsolationR04_sumPhotonEtHighThreshold, &b_muon_pfIsolationR04_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("muon_pfIsolationR04_sumPUPt", &muon_pfIsolationR04_sumPUPt, &b_muon_pfIsolationR04_sumPUPt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR03_sumChargedHadronPt", &muon_pfMeanDRIsoProfileR03_sumChargedHadronPt, &b_muon_pfMeanDRIsoProfileR03_sumChargedHadronPt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR03_sumChargedParticlePt", &muon_pfMeanDRIsoProfileR03_sumChargedParticlePt, &b_muon_pfMeanDRIsoProfileR03_sumChargedParticlePt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR03_sumPhotonEt", &muon_pfMeanDRIsoProfileR03_sumPhotonEt, &b_muon_pfMeanDRIsoProfileR03_sumPhotonEt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR03_sumNeutralHadronEtHighThreshold", &muon_pfMeanDRIsoProfileR03_sumNeutralHadronEtHighThreshold, &b_muon_pfMeanDRIsoProfileR03_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR03_sumPhotonEtHighThreshold", &muon_pfMeanDRIsoProfileR03_sumPhotonEtHighThreshold, &b_muon_pfMeanDRIsoProfileR03_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR03_sumPUPt", &muon_pfMeanDRIsoProfileR03_sumPUPt, &b_muon_pfMeanDRIsoProfileR03_sumPUPt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR04_sumChargedHadronPt", &muon_pfMeanDRIsoProfileR04_sumChargedHadronPt, &b_muon_pfMeanDRIsoProfileR04_sumChargedHadronPt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR04_sumChargedParticlePt", &muon_pfMeanDRIsoProfileR04_sumChargedParticlePt, &b_muon_pfMeanDRIsoProfileR04_sumChargedParticlePt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR04_sumPhotonEt", &muon_pfMeanDRIsoProfileR04_sumPhotonEt, &b_muon_pfMeanDRIsoProfileR04_sumPhotonEt);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR04_sumNeutralHadronEtHighThreshold", &muon_pfMeanDRIsoProfileR04_sumNeutralHadronEtHighThreshold, &b_muon_pfMeanDRIsoProfileR04_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR04_sumPhotonEtHighThreshold", &muon_pfMeanDRIsoProfileR04_sumPhotonEtHighThreshold, &b_muon_pfMeanDRIsoProfileR04_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("muon_pfMeanDRIsoProfileR04_sumPUPt", &muon_pfMeanDRIsoProfileR04_sumPUPt, &b_muon_pfMeanDRIsoProfileR04_sumPUPt);
   fChain->SetBranchAddress("muon_innerPosition_x", &muon_innerPosition_x, &b_muon_innerPosition_x);
   fChain->SetBranchAddress("muon_innerPosition_y", &muon_innerPosition_y, &b_muon_innerPosition_y);
   fChain->SetBranchAddress("muon_innerPosition_z", &muon_innerPosition_z, &b_muon_innerPosition_z);
   fChain->SetBranchAddress("muon_tevOptimized_charge", &muon_tevOptimized_charge, &b_muon_tevOptimized_charge);
   fChain->SetBranchAddress("muon_tevOptimized_pt", &muon_tevOptimized_pt, &b_muon_tevOptimized_pt);
   fChain->SetBranchAddress("muon_tevOptimized_eta", &muon_tevOptimized_eta, &b_muon_tevOptimized_eta);
   fChain->SetBranchAddress("muon_tevOptimized_phi", &muon_tevOptimized_phi, &b_muon_tevOptimized_phi);
   fChain->SetBranchAddress("muon_tevOptimized_theta", &muon_tevOptimized_theta, &b_muon_tevOptimized_theta);
   fChain->SetBranchAddress("muon_tevOptimized_px", &muon_tevOptimized_px, &b_muon_tevOptimized_px);
   fChain->SetBranchAddress("muon_tevOptimized_py", &muon_tevOptimized_py, &b_muon_tevOptimized_py);
   fChain->SetBranchAddress("muon_tevOptimized_pz", &muon_tevOptimized_pz, &b_muon_tevOptimized_pz);
   fChain->SetBranchAddress("muon_tevOptimized_d0", &muon_tevOptimized_d0, &b_muon_tevOptimized_d0);
   fChain->SetBranchAddress("muon_tevOptimized_dz", &muon_tevOptimized_dz, &b_muon_tevOptimized_dz);
   fChain->SetBranchAddress("muon_tevOptimized_dz_beamSpot", &muon_tevOptimized_dz_beamSpot, &b_muon_tevOptimized_dz_beamSpot);
   fChain->SetBranchAddress("muon_tevOptimized_dz_firstPVtx", &muon_tevOptimized_dz_firstPVtx, &b_muon_tevOptimized_dz_firstPVtx);
   fChain->SetBranchAddress("muon_tevOptimized_dxy", &muon_tevOptimized_dxy, &b_muon_tevOptimized_dxy);
   fChain->SetBranchAddress("muon_tevOptimized_dxy_beamSpot", &muon_tevOptimized_dxy_beamSpot, &b_muon_tevOptimized_dxy_beamSpot);
   fChain->SetBranchAddress("muon_tevOptimized_dxy_firstPVtx", &muon_tevOptimized_dxy_firstPVtx, &b_muon_tevOptimized_dxy_firstPVtx);
   fChain->SetBranchAddress("muon_tevOptimized_ptError", &muon_tevOptimized_ptError, &b_muon_tevOptimized_ptError);
   fChain->SetBranchAddress("muon_tevOptimized_etaError", &muon_tevOptimized_etaError, &b_muon_tevOptimized_etaError);
   fChain->SetBranchAddress("muon_tevOptimized_phiError", &muon_tevOptimized_phiError, &b_muon_tevOptimized_phiError);
   fChain->SetBranchAddress("muon_tevOptimized_thetaError", &muon_tevOptimized_thetaError, &b_muon_tevOptimized_thetaError);
   fChain->SetBranchAddress("muon_tevOptimized_d0Error", &muon_tevOptimized_d0Error, &b_muon_tevOptimized_d0Error);
   fChain->SetBranchAddress("muon_tevOptimized_dzError", &muon_tevOptimized_dzError, &b_muon_tevOptimized_dzError);
   fChain->SetBranchAddress("muon_tevOptimized_dxyError", &muon_tevOptimized_dxyError, &b_muon_tevOptimized_dxyError);
   fChain->SetBranchAddress("MET_met_et", &MET_met_et, &b_MET_met_et);
   fChain->SetBranchAddress("MET_met_phi", &MET_met_phi, &b_MET_met_phi);
   fChain->SetBranchAddress("MET_pfMet_et", &MET_pfMet_et, &b_MET_pfMet_et);
   fChain->SetBranchAddress("MET_pfMet_phi", &MET_pfMet_phi, &b_MET_pfMet_phi);
   fChain->SetBranchAddress("HEEP_eseffsixix", &HEEP_eseffsixix, &b_HEEP_eseffsixix);
   fChain->SetBranchAddress("HEEP_eseffsiyiy", &HEEP_eseffsiyiy, &b_HEEP_eseffsiyiy);
   fChain->SetBranchAddress("HEEP_eseffsirir", &HEEP_eseffsirir, &b_HEEP_eseffsirir);
   fChain->SetBranchAddress("HEEP_preshowerEnergy", &HEEP_preshowerEnergy, &b_HEEP_preshowerEnergy);
   fChain->SetBranchAddress("HEEP_e1x3", &HEEP_e1x3, &b_HEEP_e1x3);
   fChain->SetBranchAddress("HEEP_crystal_energy", &HEEP_crystal_energy, &b_HEEP_crystal_energy);
   fChain->SetBranchAddress("HEEP_crystal_eta", &HEEP_crystal_eta, &b_HEEP_crystal_eta);
   fChain->SetBranchAddress("HEEP_eshitsixix", &HEEP_eshitsixix, &b_HEEP_eshitsixix);
   fChain->SetBranchAddress("HEEP_eshitsiyiy", &HEEP_eshitsiyiy, &b_HEEP_eshitsiyiy);
   fChain->SetBranchAddress("HEEP_crystal_ietaorix", &HEEP_crystal_ietaorix, &b_HEEP_crystal_ietaorix);
   fChain->SetBranchAddress("HEEP_crystal_iphioriy", &HEEP_crystal_iphioriy, &b_HEEP_crystal_iphioriy);
   fChain->SetBranchAddress("HEEP_cutflow41_Et", &HEEP_cutflow41_Et, &b_HEEP_cutflow41_Et);
   fChain->SetBranchAddress("HEEP_cutflow41_Et_n", &HEEP_cutflow41_Et_n, &b_HEEP_cutflow41_Et_n);
   fChain->SetBranchAddress("HEEP_cutflow41_Et_nCumulative", &HEEP_cutflow41_Et_nCumulative, &b_HEEP_cutflow41_Et_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_Et_value", &HEEP_cutflow41_Et_value, &b_HEEP_cutflow41_Et_value);
   fChain->SetBranchAddress("HEEP_cutflow41_eta", &HEEP_cutflow41_eta, &b_HEEP_cutflow41_eta);
   fChain->SetBranchAddress("HEEP_cutflow41_eta_n", &HEEP_cutflow41_eta_n, &b_HEEP_cutflow41_eta_n);
   fChain->SetBranchAddress("HEEP_cutflow41_eta_nCumulative", &HEEP_cutflow41_eta_nCumulative, &b_HEEP_cutflow41_eta_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_eta_value", &HEEP_cutflow41_eta_value, &b_HEEP_cutflow41_eta_value);
   fChain->SetBranchAddress("HEEP_cutflow41_EcalDriven", &HEEP_cutflow41_EcalDriven, &b_HEEP_cutflow41_EcalDriven);
   fChain->SetBranchAddress("HEEP_cutflow41_EcalDriven_n", &HEEP_cutflow41_EcalDriven_n, &b_HEEP_cutflow41_EcalDriven_n);
   fChain->SetBranchAddress("HEEP_cutflow41_EcalDriven_nCumulative", &HEEP_cutflow41_EcalDriven_nCumulative, &b_HEEP_cutflow41_EcalDriven_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_EcalDriven_value", &HEEP_cutflow41_EcalDriven_value, &b_HEEP_cutflow41_EcalDriven_value);
   fChain->SetBranchAddress("HEEP_cutflow41_dEtaIn", &HEEP_cutflow41_dEtaIn, &b_HEEP_cutflow41_dEtaIn);
   fChain->SetBranchAddress("HEEP_cutflow41_dEtaIn_n", &HEEP_cutflow41_dEtaIn_n, &b_HEEP_cutflow41_dEtaIn_n);
   fChain->SetBranchAddress("HEEP_cutflow41_dEtaIn_nCumulative", &HEEP_cutflow41_dEtaIn_nCumulative, &b_HEEP_cutflow41_dEtaIn_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_dEtaIn_value", &HEEP_cutflow41_dEtaIn_value, &b_HEEP_cutflow41_dEtaIn_value);
   fChain->SetBranchAddress("HEEP_cutflow41_dPhiIn", &HEEP_cutflow41_dPhiIn, &b_HEEP_cutflow41_dPhiIn);
   fChain->SetBranchAddress("HEEP_cutflow41_dPhiIn_n", &HEEP_cutflow41_dPhiIn_n, &b_HEEP_cutflow41_dPhiIn_n);
   fChain->SetBranchAddress("HEEP_cutflow41_dPhiIn_nCumulative", &HEEP_cutflow41_dPhiIn_nCumulative, &b_HEEP_cutflow41_dPhiIn_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_dPhiIn_value", &HEEP_cutflow41_dPhiIn_value, &b_HEEP_cutflow41_dPhiIn_value);
   fChain->SetBranchAddress("HEEP_cutflow41_HOverE", &HEEP_cutflow41_HOverE, &b_HEEP_cutflow41_HOverE);
   fChain->SetBranchAddress("HEEP_cutflow41_HOverE_n", &HEEP_cutflow41_HOverE_n, &b_HEEP_cutflow41_HOverE_n);
   fChain->SetBranchAddress("HEEP_cutflow41_HOverE_nCumulative", &HEEP_cutflow41_HOverE_nCumulative, &b_HEEP_cutflow41_HOverE_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_HOverE_value", &HEEP_cutflow41_HOverE_value, &b_HEEP_cutflow41_HOverE_value);
   fChain->SetBranchAddress("HEEP_cutflow41_SigmaIetaIeta", &HEEP_cutflow41_SigmaIetaIeta, &b_HEEP_cutflow41_SigmaIetaIeta);
   fChain->SetBranchAddress("HEEP_cutflow41_SigmaIetaIeta_n", &HEEP_cutflow41_SigmaIetaIeta_n, &b_HEEP_cutflow41_SigmaIetaIeta_n);
   fChain->SetBranchAddress("HEEP_cutflow41_SigmaIetaIeta_nCumulative", &HEEP_cutflow41_SigmaIetaIeta_nCumulative, &b_HEEP_cutflow41_SigmaIetaIeta_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_SigmaIetaIeta_value", &HEEP_cutflow41_SigmaIetaIeta_value, &b_HEEP_cutflow41_SigmaIetaIeta_value);
   fChain->SetBranchAddress("HEEP_cutflow41_E1x5OverE5x5", &HEEP_cutflow41_E1x5OverE5x5, &b_HEEP_cutflow41_E1x5OverE5x5);
   fChain->SetBranchAddress("HEEP_cutflow41_E1x5OverE5x5_n", &HEEP_cutflow41_E1x5OverE5x5_n, &b_HEEP_cutflow41_E1x5OverE5x5_n);
   fChain->SetBranchAddress("HEEP_cutflow41_E1x5OverE5x5_nCumulative", &HEEP_cutflow41_E1x5OverE5x5_nCumulative, &b_HEEP_cutflow41_E1x5OverE5x5_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_E1x5OverE5x5_value", &HEEP_cutflow41_E1x5OverE5x5_value, &b_HEEP_cutflow41_E1x5OverE5x5_value);
   fChain->SetBranchAddress("HEEP_cutflow41_E2x5OverE5x5", &HEEP_cutflow41_E2x5OverE5x5, &b_HEEP_cutflow41_E2x5OverE5x5);
   fChain->SetBranchAddress("HEEP_cutflow41_E2x5OverE5x5_n", &HEEP_cutflow41_E2x5OverE5x5_n, &b_HEEP_cutflow41_E2x5OverE5x5_n);
   fChain->SetBranchAddress("HEEP_cutflow41_E2x5OverE5x5_nCumulative", &HEEP_cutflow41_E2x5OverE5x5_nCumulative, &b_HEEP_cutflow41_E2x5OverE5x5_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_E2x5OverE5x5_value", &HEEP_cutflow41_E2x5OverE5x5_value, &b_HEEP_cutflow41_E2x5OverE5x5_value);
   fChain->SetBranchAddress("HEEP_cutflow41_missingHits", &HEEP_cutflow41_missingHits, &b_HEEP_cutflow41_missingHits);
   fChain->SetBranchAddress("HEEP_cutflow41_missingHits_n", &HEEP_cutflow41_missingHits_n, &b_HEEP_cutflow41_missingHits_n);
   fChain->SetBranchAddress("HEEP_cutflow41_missingHits_nCumulative", &HEEP_cutflow41_missingHits_nCumulative, &b_HEEP_cutflow41_missingHits_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_missingHits_value", &HEEP_cutflow41_missingHits_value, &b_HEEP_cutflow41_missingHits_value);
   fChain->SetBranchAddress("HEEP_cutflow41_dxyFirstPV", &HEEP_cutflow41_dxyFirstPV, &b_HEEP_cutflow41_dxyFirstPV);
   fChain->SetBranchAddress("HEEP_cutflow41_dxyFirstPV_n", &HEEP_cutflow41_dxyFirstPV_n, &b_HEEP_cutflow41_dxyFirstPV_n);
   fChain->SetBranchAddress("HEEP_cutflow41_dxyFirstPV_nCumulative", &HEEP_cutflow41_dxyFirstPV_nCumulative, &b_HEEP_cutflow41_dxyFirstPV_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_dxyFirstPV_value", &HEEP_cutflow41_dxyFirstPV_value, &b_HEEP_cutflow41_dxyFirstPV_value);
   fChain->SetBranchAddress("HEEP_cutflow41_ID", &HEEP_cutflow41_ID, &b_HEEP_cutflow41_ID);
   fChain->SetBranchAddress("HEEP_cutflow41_ID_n", &HEEP_cutflow41_ID_n, &b_HEEP_cutflow41_ID_n);
   fChain->SetBranchAddress("HEEP_cutflow41_isolEMHadDepth1", &HEEP_cutflow41_isolEMHadDepth1, &b_HEEP_cutflow41_isolEMHadDepth1);
   fChain->SetBranchAddress("HEEP_cutflow41_isolEMHadDepth1_n", &HEEP_cutflow41_isolEMHadDepth1_n, &b_HEEP_cutflow41_isolEMHadDepth1_n);
   fChain->SetBranchAddress("HEEP_cutflow41_isolEMHadDepth1_nCumulative", &HEEP_cutflow41_isolEMHadDepth1_nCumulative, &b_HEEP_cutflow41_isolEMHadDepth1_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_isolEMHadDepth1_value", &HEEP_cutflow41_isolEMHadDepth1_value, &b_HEEP_cutflow41_isolEMHadDepth1_value);
   fChain->SetBranchAddress("HEEP_cutflow41_IsolPtTrks", &HEEP_cutflow41_IsolPtTrks, &b_HEEP_cutflow41_IsolPtTrks);
   fChain->SetBranchAddress("HEEP_cutflow41_IsolPtTrks_n", &HEEP_cutflow41_IsolPtTrks_n, &b_HEEP_cutflow41_IsolPtTrks_n);
   fChain->SetBranchAddress("HEEP_cutflow41_IsolPtTrks_nCumulative", &HEEP_cutflow41_IsolPtTrks_nCumulative, &b_HEEP_cutflow41_IsolPtTrks_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow41_IsolPtTrks_value", &HEEP_cutflow41_IsolPtTrks_value, &b_HEEP_cutflow41_IsolPtTrks_value);
   fChain->SetBranchAddress("HEEP_cutflow41_isolation", &HEEP_cutflow41_isolation, &b_HEEP_cutflow41_isolation);
   fChain->SetBranchAddress("HEEP_cutflow41_isolation_n", &HEEP_cutflow41_isolation_n, &b_HEEP_cutflow41_isolation_n);
   fChain->SetBranchAddress("HEEP_cutflow41_total", &HEEP_cutflow41_total, &b_HEEP_cutflow41_total);
   fChain->SetBranchAddress("HEEP_cutflow41_total_n", &HEEP_cutflow41_total_n, &b_HEEP_cutflow41_total_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_Et", &HEEP_cutflow50_50ns_Et, &b_HEEP_cutflow50_50ns_Et);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_Et_n", &HEEP_cutflow50_50ns_Et_n, &b_HEEP_cutflow50_50ns_Et_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_Et_nCumulative", &HEEP_cutflow50_50ns_Et_nCumulative, &b_HEEP_cutflow50_50ns_Et_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_Et_value", &HEEP_cutflow50_50ns_Et_value, &b_HEEP_cutflow50_50ns_Et_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_eta", &HEEP_cutflow50_50ns_eta, &b_HEEP_cutflow50_50ns_eta);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_eta_n", &HEEP_cutflow50_50ns_eta_n, &b_HEEP_cutflow50_50ns_eta_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_eta_nCumulative", &HEEP_cutflow50_50ns_eta_nCumulative, &b_HEEP_cutflow50_50ns_eta_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_eta_value", &HEEP_cutflow50_50ns_eta_value, &b_HEEP_cutflow50_50ns_eta_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_EcalDriven", &HEEP_cutflow50_50ns_EcalDriven, &b_HEEP_cutflow50_50ns_EcalDriven);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_EcalDriven_n", &HEEP_cutflow50_50ns_EcalDriven_n, &b_HEEP_cutflow50_50ns_EcalDriven_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_EcalDriven_nCumulative", &HEEP_cutflow50_50ns_EcalDriven_nCumulative, &b_HEEP_cutflow50_50ns_EcalDriven_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_EcalDriven_value", &HEEP_cutflow50_50ns_EcalDriven_value, &b_HEEP_cutflow50_50ns_EcalDriven_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dEtaIn", &HEEP_cutflow50_50ns_dEtaIn, &b_HEEP_cutflow50_50ns_dEtaIn);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dEtaIn_n", &HEEP_cutflow50_50ns_dEtaIn_n, &b_HEEP_cutflow50_50ns_dEtaIn_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dEtaIn_nCumulative", &HEEP_cutflow50_50ns_dEtaIn_nCumulative, &b_HEEP_cutflow50_50ns_dEtaIn_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dEtaIn_value", &HEEP_cutflow50_50ns_dEtaIn_value, &b_HEEP_cutflow50_50ns_dEtaIn_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dPhiIn", &HEEP_cutflow50_50ns_dPhiIn, &b_HEEP_cutflow50_50ns_dPhiIn);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dPhiIn_n", &HEEP_cutflow50_50ns_dPhiIn_n, &b_HEEP_cutflow50_50ns_dPhiIn_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dPhiIn_nCumulative", &HEEP_cutflow50_50ns_dPhiIn_nCumulative, &b_HEEP_cutflow50_50ns_dPhiIn_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dPhiIn_value", &HEEP_cutflow50_50ns_dPhiIn_value, &b_HEEP_cutflow50_50ns_dPhiIn_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_HOverE", &HEEP_cutflow50_50ns_HOverE, &b_HEEP_cutflow50_50ns_HOverE);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_HOverE_n", &HEEP_cutflow50_50ns_HOverE_n, &b_HEEP_cutflow50_50ns_HOverE_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_HOverE_nCumulative", &HEEP_cutflow50_50ns_HOverE_nCumulative, &b_HEEP_cutflow50_50ns_HOverE_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_HOverE_value", &HEEP_cutflow50_50ns_HOverE_value, &b_HEEP_cutflow50_50ns_HOverE_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_SigmaIetaIeta", &HEEP_cutflow50_50ns_SigmaIetaIeta, &b_HEEP_cutflow50_50ns_SigmaIetaIeta);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_SigmaIetaIeta_n", &HEEP_cutflow50_50ns_SigmaIetaIeta_n, &b_HEEP_cutflow50_50ns_SigmaIetaIeta_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_SigmaIetaIeta_nCumulative", &HEEP_cutflow50_50ns_SigmaIetaIeta_nCumulative, &b_HEEP_cutflow50_50ns_SigmaIetaIeta_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_SigmaIetaIeta_value", &HEEP_cutflow50_50ns_SigmaIetaIeta_value, &b_HEEP_cutflow50_50ns_SigmaIetaIeta_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E1x5OverE5x5", &HEEP_cutflow50_50ns_E1x5OverE5x5, &b_HEEP_cutflow50_50ns_E1x5OverE5x5);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E1x5OverE5x5_n", &HEEP_cutflow50_50ns_E1x5OverE5x5_n, &b_HEEP_cutflow50_50ns_E1x5OverE5x5_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E1x5OverE5x5_nCumulative", &HEEP_cutflow50_50ns_E1x5OverE5x5_nCumulative, &b_HEEP_cutflow50_50ns_E1x5OverE5x5_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E1x5OverE5x5_value", &HEEP_cutflow50_50ns_E1x5OverE5x5_value, &b_HEEP_cutflow50_50ns_E1x5OverE5x5_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E2x5OverE5x5", &HEEP_cutflow50_50ns_E2x5OverE5x5, &b_HEEP_cutflow50_50ns_E2x5OverE5x5);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E2x5OverE5x5_n", &HEEP_cutflow50_50ns_E2x5OverE5x5_n, &b_HEEP_cutflow50_50ns_E2x5OverE5x5_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E2x5OverE5x5_nCumulative", &HEEP_cutflow50_50ns_E2x5OverE5x5_nCumulative, &b_HEEP_cutflow50_50ns_E2x5OverE5x5_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_E2x5OverE5x5_value", &HEEP_cutflow50_50ns_E2x5OverE5x5_value, &b_HEEP_cutflow50_50ns_E2x5OverE5x5_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_missingHits", &HEEP_cutflow50_50ns_missingHits, &b_HEEP_cutflow50_50ns_missingHits);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_missingHits_n", &HEEP_cutflow50_50ns_missingHits_n, &b_HEEP_cutflow50_50ns_missingHits_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_missingHits_nCumulative", &HEEP_cutflow50_50ns_missingHits_nCumulative, &b_HEEP_cutflow50_50ns_missingHits_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_missingHits_value", &HEEP_cutflow50_50ns_missingHits_value, &b_HEEP_cutflow50_50ns_missingHits_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dxyFirstPV", &HEEP_cutflow50_50ns_dxyFirstPV, &b_HEEP_cutflow50_50ns_dxyFirstPV);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dxyFirstPV_n", &HEEP_cutflow50_50ns_dxyFirstPV_n, &b_HEEP_cutflow50_50ns_dxyFirstPV_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dxyFirstPV_nCumulative", &HEEP_cutflow50_50ns_dxyFirstPV_nCumulative, &b_HEEP_cutflow50_50ns_dxyFirstPV_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_dxyFirstPV_value", &HEEP_cutflow50_50ns_dxyFirstPV_value, &b_HEEP_cutflow50_50ns_dxyFirstPV_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_ID", &HEEP_cutflow50_50ns_ID, &b_HEEP_cutflow50_50ns_ID);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_ID_n", &HEEP_cutflow50_50ns_ID_n, &b_HEEP_cutflow50_50ns_ID_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_isolEMHadDepth1", &HEEP_cutflow50_50ns_isolEMHadDepth1, &b_HEEP_cutflow50_50ns_isolEMHadDepth1);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_isolEMHadDepth1_n", &HEEP_cutflow50_50ns_isolEMHadDepth1_n, &b_HEEP_cutflow50_50ns_isolEMHadDepth1_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_isolEMHadDepth1_nCumulative", &HEEP_cutflow50_50ns_isolEMHadDepth1_nCumulative, &b_HEEP_cutflow50_50ns_isolEMHadDepth1_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_isolEMHadDepth1_value", &HEEP_cutflow50_50ns_isolEMHadDepth1_value, &b_HEEP_cutflow50_50ns_isolEMHadDepth1_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_IsolPtTrks", &HEEP_cutflow50_50ns_IsolPtTrks, &b_HEEP_cutflow50_50ns_IsolPtTrks);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_IsolPtTrks_n", &HEEP_cutflow50_50ns_IsolPtTrks_n, &b_HEEP_cutflow50_50ns_IsolPtTrks_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_IsolPtTrks_nCumulative", &HEEP_cutflow50_50ns_IsolPtTrks_nCumulative, &b_HEEP_cutflow50_50ns_IsolPtTrks_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_IsolPtTrks_value", &HEEP_cutflow50_50ns_IsolPtTrks_value, &b_HEEP_cutflow50_50ns_IsolPtTrks_value);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_isolation", &HEEP_cutflow50_50ns_isolation, &b_HEEP_cutflow50_50ns_isolation);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_isolation_n", &HEEP_cutflow50_50ns_isolation_n, &b_HEEP_cutflow50_50ns_isolation_n);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_total", &HEEP_cutflow50_50ns_total, &b_HEEP_cutflow50_50ns_total);
   fChain->SetBranchAddress("HEEP_cutflow50_50ns_total_n", &HEEP_cutflow50_50ns_total_n, &b_HEEP_cutflow50_50ns_total_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_Et", &HEEP_cutflow50_25ns_Et, &b_HEEP_cutflow50_25ns_Et);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_Et_n", &HEEP_cutflow50_25ns_Et_n, &b_HEEP_cutflow50_25ns_Et_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_Et_nCumulative", &HEEP_cutflow50_25ns_Et_nCumulative, &b_HEEP_cutflow50_25ns_Et_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_Et_value", &HEEP_cutflow50_25ns_Et_value, &b_HEEP_cutflow50_25ns_Et_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_eta", &HEEP_cutflow50_25ns_eta, &b_HEEP_cutflow50_25ns_eta);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_eta_n", &HEEP_cutflow50_25ns_eta_n, &b_HEEP_cutflow50_25ns_eta_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_eta_nCumulative", &HEEP_cutflow50_25ns_eta_nCumulative, &b_HEEP_cutflow50_25ns_eta_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_eta_value", &HEEP_cutflow50_25ns_eta_value, &b_HEEP_cutflow50_25ns_eta_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_EcalDriven", &HEEP_cutflow50_25ns_EcalDriven, &b_HEEP_cutflow50_25ns_EcalDriven);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_EcalDriven_n", &HEEP_cutflow50_25ns_EcalDriven_n, &b_HEEP_cutflow50_25ns_EcalDriven_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_EcalDriven_nCumulative", &HEEP_cutflow50_25ns_EcalDriven_nCumulative, &b_HEEP_cutflow50_25ns_EcalDriven_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_EcalDriven_value", &HEEP_cutflow50_25ns_EcalDriven_value, &b_HEEP_cutflow50_25ns_EcalDriven_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dEtaIn", &HEEP_cutflow50_25ns_dEtaIn, &b_HEEP_cutflow50_25ns_dEtaIn);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dEtaIn_n", &HEEP_cutflow50_25ns_dEtaIn_n, &b_HEEP_cutflow50_25ns_dEtaIn_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dEtaIn_nCumulative", &HEEP_cutflow50_25ns_dEtaIn_nCumulative, &b_HEEP_cutflow50_25ns_dEtaIn_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dEtaIn_value", &HEEP_cutflow50_25ns_dEtaIn_value, &b_HEEP_cutflow50_25ns_dEtaIn_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dPhiIn", &HEEP_cutflow50_25ns_dPhiIn, &b_HEEP_cutflow50_25ns_dPhiIn);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dPhiIn_n", &HEEP_cutflow50_25ns_dPhiIn_n, &b_HEEP_cutflow50_25ns_dPhiIn_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dPhiIn_nCumulative", &HEEP_cutflow50_25ns_dPhiIn_nCumulative, &b_HEEP_cutflow50_25ns_dPhiIn_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dPhiIn_value", &HEEP_cutflow50_25ns_dPhiIn_value, &b_HEEP_cutflow50_25ns_dPhiIn_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_HOverE", &HEEP_cutflow50_25ns_HOverE, &b_HEEP_cutflow50_25ns_HOverE);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_HOverE_n", &HEEP_cutflow50_25ns_HOverE_n, &b_HEEP_cutflow50_25ns_HOverE_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_HOverE_nCumulative", &HEEP_cutflow50_25ns_HOverE_nCumulative, &b_HEEP_cutflow50_25ns_HOverE_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_HOverE_value", &HEEP_cutflow50_25ns_HOverE_value, &b_HEEP_cutflow50_25ns_HOverE_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_SigmaIetaIeta", &HEEP_cutflow50_25ns_SigmaIetaIeta, &b_HEEP_cutflow50_25ns_SigmaIetaIeta);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_SigmaIetaIeta_n", &HEEP_cutflow50_25ns_SigmaIetaIeta_n, &b_HEEP_cutflow50_25ns_SigmaIetaIeta_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_SigmaIetaIeta_nCumulative", &HEEP_cutflow50_25ns_SigmaIetaIeta_nCumulative, &b_HEEP_cutflow50_25ns_SigmaIetaIeta_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_SigmaIetaIeta_value", &HEEP_cutflow50_25ns_SigmaIetaIeta_value, &b_HEEP_cutflow50_25ns_SigmaIetaIeta_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E1x5OverE5x5", &HEEP_cutflow50_25ns_E1x5OverE5x5, &b_HEEP_cutflow50_25ns_E1x5OverE5x5);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E1x5OverE5x5_n", &HEEP_cutflow50_25ns_E1x5OverE5x5_n, &b_HEEP_cutflow50_25ns_E1x5OverE5x5_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E1x5OverE5x5_nCumulative", &HEEP_cutflow50_25ns_E1x5OverE5x5_nCumulative, &b_HEEP_cutflow50_25ns_E1x5OverE5x5_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E1x5OverE5x5_value", &HEEP_cutflow50_25ns_E1x5OverE5x5_value, &b_HEEP_cutflow50_25ns_E1x5OverE5x5_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E2x5OverE5x5", &HEEP_cutflow50_25ns_E2x5OverE5x5, &b_HEEP_cutflow50_25ns_E2x5OverE5x5);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E2x5OverE5x5_n", &HEEP_cutflow50_25ns_E2x5OverE5x5_n, &b_HEEP_cutflow50_25ns_E2x5OverE5x5_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E2x5OverE5x5_nCumulative", &HEEP_cutflow50_25ns_E2x5OverE5x5_nCumulative, &b_HEEP_cutflow50_25ns_E2x5OverE5x5_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_E2x5OverE5x5_value", &HEEP_cutflow50_25ns_E2x5OverE5x5_value, &b_HEEP_cutflow50_25ns_E2x5OverE5x5_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_missingHits", &HEEP_cutflow50_25ns_missingHits, &b_HEEP_cutflow50_25ns_missingHits);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_missingHits_n", &HEEP_cutflow50_25ns_missingHits_n, &b_HEEP_cutflow50_25ns_missingHits_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_missingHits_nCumulative", &HEEP_cutflow50_25ns_missingHits_nCumulative, &b_HEEP_cutflow50_25ns_missingHits_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_missingHits_value", &HEEP_cutflow50_25ns_missingHits_value, &b_HEEP_cutflow50_25ns_missingHits_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dxyFirstPV", &HEEP_cutflow50_25ns_dxyFirstPV, &b_HEEP_cutflow50_25ns_dxyFirstPV);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dxyFirstPV_n", &HEEP_cutflow50_25ns_dxyFirstPV_n, &b_HEEP_cutflow50_25ns_dxyFirstPV_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dxyFirstPV_nCumulative", &HEEP_cutflow50_25ns_dxyFirstPV_nCumulative, &b_HEEP_cutflow50_25ns_dxyFirstPV_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_dxyFirstPV_value", &HEEP_cutflow50_25ns_dxyFirstPV_value, &b_HEEP_cutflow50_25ns_dxyFirstPV_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_ID", &HEEP_cutflow50_25ns_ID, &b_HEEP_cutflow50_25ns_ID);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_ID_n", &HEEP_cutflow50_25ns_ID_n, &b_HEEP_cutflow50_25ns_ID_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_isolEMHadDepth1", &HEEP_cutflow50_25ns_isolEMHadDepth1, &b_HEEP_cutflow50_25ns_isolEMHadDepth1);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_isolEMHadDepth1_n", &HEEP_cutflow50_25ns_isolEMHadDepth1_n, &b_HEEP_cutflow50_25ns_isolEMHadDepth1_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_isolEMHadDepth1_nCumulative", &HEEP_cutflow50_25ns_isolEMHadDepth1_nCumulative, &b_HEEP_cutflow50_25ns_isolEMHadDepth1_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_isolEMHadDepth1_value", &HEEP_cutflow50_25ns_isolEMHadDepth1_value, &b_HEEP_cutflow50_25ns_isolEMHadDepth1_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_IsolPtTrks", &HEEP_cutflow50_25ns_IsolPtTrks, &b_HEEP_cutflow50_25ns_IsolPtTrks);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_IsolPtTrks_n", &HEEP_cutflow50_25ns_IsolPtTrks_n, &b_HEEP_cutflow50_25ns_IsolPtTrks_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_IsolPtTrks_nCumulative", &HEEP_cutflow50_25ns_IsolPtTrks_nCumulative, &b_HEEP_cutflow50_25ns_IsolPtTrks_nCumulative);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_IsolPtTrks_value", &HEEP_cutflow50_25ns_IsolPtTrks_value, &b_HEEP_cutflow50_25ns_IsolPtTrks_value);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_isolation", &HEEP_cutflow50_25ns_isolation, &b_HEEP_cutflow50_25ns_isolation);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_isolation_n", &HEEP_cutflow50_25ns_isolation_n, &b_HEEP_cutflow50_25ns_isolation_n);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_total", &HEEP_cutflow50_25ns_total, &b_HEEP_cutflow50_25ns_total);
   fChain->SetBranchAddress("HEEP_cutflow50_25ns_total_n", &HEEP_cutflow50_25ns_total_n, &b_HEEP_cutflow50_25ns_total_n);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_index", &mc_index, &b_mc_index);
   fChain->SetBranchAddress("mc_pdgId", &mc_pdgId, &b_mc_pdgId);
   fChain->SetBranchAddress("mc_charge", &mc_charge, &b_mc_charge);
   fChain->SetBranchAddress("mc_status", &mc_status, &b_mc_status);
   fChain->SetBranchAddress("mc_mass", &mc_mass, &b_mc_mass);
   fChain->SetBranchAddress("mc_px", &mc_px, &b_mc_px);
   fChain->SetBranchAddress("mc_py", &mc_py, &b_mc_py);
   fChain->SetBranchAddress("mc_pz", &mc_pz, &b_mc_pz);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_energy", &mc_energy, &b_mc_energy);
   fChain->SetBranchAddress("mc_numberOfDaughters", &mc_numberOfDaughters, &b_mc_numberOfDaughters);
   fChain->SetBranchAddress("mc_numberOfMothers", &mc_numberOfMothers, &b_mc_numberOfMothers);
   fChain->SetBranchAddress("mc_mother_index", &mc_mother_index, &b_mc_mother_index);
   fChain->SetBranchAddress("mc_mother_pdgId", &mc_mother_pdgId, &b_mc_mother_pdgId);
   fChain->SetBranchAddress("mc_mother_px", &mc_mother_px, &b_mc_mother_px);
   fChain->SetBranchAddress("mc_mother_py", &mc_mother_py, &b_mc_mother_py);
   fChain->SetBranchAddress("mc_mother_pz", &mc_mother_pz, &b_mc_mother_pz);
   fChain->SetBranchAddress("mc_mother_pt", &mc_mother_pt, &b_mc_mother_pt);
   fChain->SetBranchAddress("mc_mother_eta", &mc_mother_eta, &b_mc_mother_eta);
   fChain->SetBranchAddress("mc_mother_phi", &mc_mother_phi, &b_mc_mother_phi);
   fChain->SetBranchAddress("mc_mother_energy", &mc_mother_energy, &b_mc_mother_energy);
   fChain->SetBranchAddress("mc_mother_mass", &mc_mother_mass, &b_mc_mother_mass);
   fChain->SetBranchAddress("gsf_triggerMatch_hltL1sL1SingleEG12", &gsf_triggerMatch_hltL1sL1SingleEG12, &b_gsf_triggerMatch_hltL1sL1SingleEG12);
   fChain->SetBranchAddress("gsf_triggerMatch_hltL1sL1Mu3p5EG12", &gsf_triggerMatch_hltL1sL1Mu3p5EG12, &b_gsf_triggerMatch_hltL1sL1Mu3p5EG12);
   fChain->SetBranchAddress("gsf_triggerMatch_hltL1sL1SingleEG22", &gsf_triggerMatch_hltL1sL1SingleEG22, &b_gsf_triggerMatch_hltL1sL1SingleEG22);
   fChain->SetBranchAddress("gsf_triggerMatch_hltEle33CaloIdLPixelMatchFilter", &gsf_triggerMatch_hltEle33CaloIdLPixelMatchFilter, &b_gsf_triggerMatch_hltEle33CaloIdLPixelMatchFilter);
   fChain->SetBranchAddress("gsf_triggerMatch_hltDiEle33CaloIdLGsfTrkIdVLDPhiDoubleFilter", &gsf_triggerMatch_hltDiEle33CaloIdLGsfTrkIdVLDPhiDoubleFilter, &b_gsf_triggerMatch_hltDiEle33CaloIdLGsfTrkIdVLDPhiDoubleFilter);
   fChain->SetBranchAddress("gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoFilter", &gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoFilter, &b_gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoFilter);
   fChain->SetBranchAddress("gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoDoubleFilter", &gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoDoubleFilter, &b_gsf_triggerMatch_hltEle17TightIdLooseIsoEle8TightIdLooseIsoTrackIsoDoubleFilter);
   fChain->SetBranchAddress("gsf_triggerMatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17TrackIsoFilter", &gsf_triggerMatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17TrackIsoFilter, &b_gsf_triggerMatch_hltEle32CaloIdTCaloIsoTTrkIdTTrkIsoTSC17TrackIsoFilter);
   fChain->SetBranchAddress("gsf_triggerMatch_hltEle27WP80TrackIsoFilter", &gsf_triggerMatch_hltEle27WP80TrackIsoFilter, &b_gsf_triggerMatch_hltEle27WP80TrackIsoFilter);
   fChain->SetBranchAddress("gsf_triggerMatch_hltMu22Photon22CaloIdLHEFilter", &gsf_triggerMatch_hltMu22Photon22CaloIdLHEFilter, &b_gsf_triggerMatch_hltMu22Photon22CaloIdLHEFilter);
   fChain->SetBranchAddress("hltL1sMu16Eta2p1", &hltL1sMu16Eta2p1, &b_hltL1sMu16Eta2p1);
   fChain->SetBranchAddress("hltL1sL1Mu3p5EG12", &hltL1sL1Mu3p5EG12, &b_hltL1sL1Mu3p5EG12);
   fChain->SetBranchAddress("hltL1Mu3p5EG12L3Filtered22", &hltL1Mu3p5EG12L3Filtered22, &b_hltL1Mu3p5EG12L3Filtered22);
   fChain->SetBranchAddress("hltL3fL1sMu16Eta2p1L1f0L2f16QL3Filtered40Q", &hltL3fL1sMu16Eta2p1L1f0L2f16QL3Filtered40Q, &b_hltL3fL1sMu16Eta2p1L1f0L2f16QL3Filtered40Q);
   Notify();
}

Bool_t Analyzer::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analyzer::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analyzer::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analyzer_cxx
