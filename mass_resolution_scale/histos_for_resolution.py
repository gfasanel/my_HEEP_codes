##########################################################################################
# HISTOGRAMS MAKER FOR HEEP#
##########################################################################################
# (c) 2015 Aidan Randle-Conde (ULB), Giuseppe Fasanella (ULB)                            #
# Contact: aidan.randleconde@gmail.com, giuseppe.fasanella.cern.ch                       #
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


##########
#file= ROOT.TFile('/user/gfasanel/public/HEEP_samples/crab_20150126_PHYS14_ZprimeToEE_M5000_20bx25/outfile_PHYS14_%s.root'%sname,'READ')
#tree = file.Get('IIHEAnalysis')
#nEntries = tree.GetEntries()

samples_path='/user/gfasanel/public/HEEP_samples/'
tree= ROOT.TChain("IIHEAnalysis")

#Since this is just for the mass resolution you don't need to reweight the histograms
#Keep in mind that the files' name don't match their real mass range

tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_120_200_20bx25__120_200/outfile_PHYS14_DYToEEMM_120_200_20bx25__120_200.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_1400_2300_20bx25__3500_4500/outfile_PHYS14_DYToEEMM_1400_2300_20bx25__3500_4500.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_200_400_20bx25__1400_2300/outfile_PHYS14_DYToEEMM_200_400_20bx25__1400_2300.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_2300_3500_20bx25__400_800/outfile_PHYS14_DYToEEMM_2300_3500_20bx25__400_800.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_3500_4500_20bx25__4500_6000/outfile_PHYS14_DYToEEMM_3500_4500_20bx25__4500_6000.root')) 
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_400_800_20bx25__200_400/outfile_PHYS14_DYToEEMM_400_800_20bx25__200_400.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_4500_6000_20bx25__6000_7500/outfile_PHYS14_DYToEEMM_4500_6000_20bx25__6000_7500.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_6000_7500_20bx25__7500_8500/outfile_PHYS14_DYToEEMM_6000_7500_20bx25__7500_8500.root'))
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_7500_8500_20bx25__800_1400/outfile_PHYS14_DYToEEMM_7500_8500_20bx25__800_1400.root')) 
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_800_1400_20bx25__2300_3500/outfile_PHYS14_DYToEEMM_800_1400_20bx25__2300_3500.root')) 
tree.Add(str(samples_path+'crab_20150128_PHYS14_DYToEEMM_8500_9500_20bx25__8500_9500/outfile_PHYS14_DYToEEMM_8500_9500_20bx25__8500_9500.root'))
tree.Add(str('/user/gfasanel/public/HEEP_samples/crab_20150126_PHYS14_ZprimeToEE_M5000_20bx25/outfile_PHYS14_%s.root'%sname))

##########################################################################################
#                       Functions and classes to read from the tree                      #
##########################################################################################
def get_HEEP_vars(tree):
    branches = dir(tree)
    HEEP_vars = []
    for leaf in tree.GetListOfLeaves():
        b = leaf.GetName()
        if '_n' in b:
            continue
        if 'HEEP_' in b or 'gsf_' in b:
            HEEP_vars.append(b)
    return HEEP_vars
HEEP_vars = get_HEEP_vars(tree)

class Zboson_object:
    def __init__(self, e1, e2):
        self.e1 = e1
        self.e2 = e2
        self.p4 = e1.p4 + e2.p4
        self.regions = 'none'
        if self.e1.region=='barrel' and self.e2.region=='barrel':
            self.regions = 'BB'
        elif self.e1.region=='barrel' and self.e2.region=='endcap':
            self.regions = 'BE'
        elif self.e1.region=='endcap' and self.e2.region=='barrel':
            self.regions = 'BE'
        elif self.e1.region=='endcap' and self.e2.region=='endcap':
            self.regions = 'EE'

class Zboson_object_supercluster:#The energy is the supercluster energy
    def __init__(self, e1, e2):
        self.e1 = e1
        self.e2 = e2
        self.p4 = e1.p4_supercluster + e2.p4_supercluster
        self.regions = 'none'
        if self.e1.region=='barrel' and self.e2.region=='barrel':
            self.regions = 'BB'
        elif self.e1.region=='barrel' and self.e2.region=='endcap':
            self.regions = 'BE'
        elif self.e1.region=='endcap' and self.e2.region=='barrel':
            self.regions = 'BE'
        elif self.e1.region=='endcap' and self.e2.region=='endcap':
            self.regions = 'EE'

class gen_electron_from_tree:
    def __init__(self, index, tree):
        self.p4 = ROOT.TLorentzVector( tree.mc_px[index], tree.mc_py[index], tree.mc_pz[index], tree.mc_energy[index])
        
        # Variable to store reco-matched gsf
        # For now put this to False, and set it later if we find a match
        self.gsf_electron = False
        self.matched_gsf_electron = False
        self.matched_HEEPID       = False
        self.matched_HEEPAcc      = False
        
        self.region = 'none'
        if abs(self.p4.Eta()) < 1.4442:
            self.region =  'barrel'
        elif abs(self.p4.Eta())>1.566  and abs(self.p4.Eta())<2.5:
            self.region = 'endcap'

class gsf_electron_from_tree:
    def __init__(self, index, tree):
        for var in HEEP_vars:
            # Quick sanity check- it looks like some values may be missing from the ntuples
            if len(getattr(tree,var)) >index:
                setattr(self, var, getattr(tree,var)[index])
        self.p4 = ROOT.TLorentzVector( self.gsf_px, self.gsf_py, self.gsf_pz, self.gsf_energy)
        self.p4_supercluster = ROOT.TLorentzVector( self.gsf_px, self.gsf_py, self.gsf_pz, self.gsf_superClusterEnergy)#adding superClusterEnergy
        self.HoverE=self.gsf_hadronicOverEm
        self.HEEPID = self.HEEP_cutflow50_25ns_EcalDriven and self.HEEP_cutflow50_25ns_dEtaIn and self.HEEP_cutflow50_25ns_dPhiIn and self.HEEP_cutflow50_25ns_HOverE and self.HEEP_cutflow50_25ns_SigmaIetaIeta and self.HEEP_cutflow50_25ns_E1x5OverE5x5 and self.HEEP_cutflow50_25ns_E2x5OverE5x5 and self.HEEP_cutflow50_25ns_missingHits and self.HEEP_cutflow50_25ns_dxyFirstPV and self.HEEP_cutflow50_25ns_isolEMHadDepth1 and self.HEEP_cutflow50_25ns_IsolPtTrks
        self.HEEPAcc = self.HEEP_cutflow50_25ns_Et and self.HEEP_cutflow50_25ns_eta
        
        self.region = 'none'
        if abs(self.gsf_eta) < 1.4442:
            self.region =  'barrel'
        elif abs(self.gsf_eta)>1.566  and abs(self.gsf_eta)<2.5:
            self.region = 'endcap'
        

def make_gen_electrons(tree):
    mc_n = tree.mc_n
    gen_electrons = []
    for i in range(0,mc_n):
        if abs(tree.mc_pdgId[i])==11:
            gen_electrons.append( gen_electron_from_tree(i, tree) )
    return gen_electrons

def make_gsf_electrons(tree):
    gsf_n = tree.gsf_n
    gsf_electrons = []
    for i in range(0,gsf_n):
        gsf_electrons.append( gsf_electron_from_tree(i, tree) )
    return gsf_electrons

##########################################################################################
#                                 Declare some histograms                                #
##########################################################################################
hBase_mee = ROOT.TH1F('hBase_mee', '', 600, 0, 6000)
hBase_mee.GetXaxis().SetTitle('m(ee) [GeV]')
hBase_mee.GetYaxis().SetTitle('entries per 100 GeV')

h_mee_gen             = {}
h_mee_gen_matchedGsf  = {}
h_mee_gen_matchedHEEP = {}
for regions in ['BB','BE','EE']:
    h_mee_gen[regions]             = hBase_mee.Clone('h_mee_gen_%s'%regions            )
    h_mee_gen_matchedGsf[regions]  = hBase_mee.Clone('h_mee_gen_matchedGsf_%s'%regions )
    h_mee_gen_matchedHEEP[regions] = hBase_mee.Clone('h_mee_gen_matchedHEEP_%s'%regions )

######## Mass resolution #################################################################
hBase_resolution = ROOT.TH1F('hBase_resolution', '', 100, -0.1, 0.1)
hBase_scale      = ROOT.TH1F('hBase_scale'     , '', 100,  0.94, 1.06)
hBase_HoverE     = ROOT.TH1F('hBase_HoverE', '', 100, 0, 0.15)

#h_mee_resolution and h_mee_scale depend on region and mass bin
h_mee_resolution              = {}
h_mee_scale                   = {}
h_mee_resolution_supercluster = {}
h_mee_HoverE                  = {}
h_mee_resolution_HoE_cut      = {}
h_mee_scale_HoE_cut           = {}

for regions in ['BB','BE','EE']:
    h_mee_resolution[regions]             ={}
    h_mee_resolution_supercluster[regions]={}
    h_mee_scale[regions]                  ={}
    h_mee_HoverE[regions]                 ={}
    h_mee_resolution_HoE_cut[regions]     = {}
    h_mee_scale_HoE_cut[regions]          = {}


#I want different bin width. This defines my 3 regions
hBase_mee_mr1 = ROOT.TH1F('hBase_mee_mr1', '', 5, 0, 1000)
hBase_mee_mr2 = ROOT.TH1F('hBase_mee_mr2', '', 16, 1000, 5200)
hBase_mee_mr3 = ROOT.TH1F('hBase_mee_mr3', '', 1, 5200, 6000)

nbins= hBase_mee_mr1.GetSize() + hBase_mee_mr2.GetSize() + hBase_mee_mr3.GetSize() -6
#now define the mass bin regions:
bins=[]

for i in range(1,hBase_mee_mr1.GetSize() -1):
    bins.append(hBase_mee_mr1.GetBinLowEdge(i))
    print hBase_mee_mr1.GetBinLowEdge(i)
for i in range(1,hBase_mee_mr2.GetSize() -1):
    bins.append(hBase_mee_mr2.GetBinLowEdge(i))
    print hBase_mee_mr2.GetBinLowEdge(i)
for i in range(1,hBase_mee_mr3.GetSize() -1):
    bins.append(hBase_mee_mr3.GetBinLowEdge(i))
    print hBase_mee_mr3.GetBinLowEdge(i)
bins.append(6000)

bins_=array("d",bins) #to make everything work

hBase_mee_mr = ROOT.TH1F('hBase_mee_mr', '',nbins , bins_)

for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+2):# for each mass bin (+2 in case of overflows)
        h_mee_resolution[regions][i]              = hBase_resolution.Clone(str('h_resolution_'+regions+'_%d'%i))             
        h_mee_resolution_supercluster[regions][i] = hBase_resolution.Clone(str('h_resolution_supercluster_'+regions+'_%d'%i))
        h_mee_scale[regions][i]                   = hBase_scale     .Clone(str('h_scale_'+regions+'_%d'    %i))
        h_mee_HoverE[regions][i]                  = hBase_HoverE    .Clone(str('h_HoverE_'+regions+'_%d'    %i))
        h_mee_resolution_HoE_cut[regions][i]               = hBase_resolution.Clone(str('h_resolution_HoE_cut_'+regions+'_%d'%i))             
        h_mee_scale_HoE_cut[regions][i]                    = hBase_scale     .Clone(str('h_scale_HoE_cut_'+regions+'_%d'%i))

##########################################################################################
#                                    Now loop and plot                                   #
##########################################################################################
DeltaRCut = 0.15
nEventsWithEE = 0
#nEntries = 1000
nEntries = tree.GetEntries()

print "Number of mass bins for resolution", hBase_mee_mr.GetNbinsX()
for iEntry in range(0,nEntries):
    if iEntry%1000==0:
        print iEntry , '/' , nEntries
    tree.GetEntry(iEntry)
    
    #taking, for each entry, gen electrons and reco electrons
    gen_electrons = make_gen_electrons(tree)
    gsf_electrons = make_gsf_electrons(tree)
    if len(gen_electrons)<2:
        continue
    nEventsWithEE += 1
    
    #Assuming only 2 gen (not ordered in pt, just the first two) ?
    gen1 = gen_electrons[0]
    gen2 = gen_electrons[1]
    
    # Match gen to gsf electrons
    smallestDR1 = 1e6
    smallestDR2 = 1e6
    smallestDRGsf1 = -1 #this is the "number" which identifies the mathced gsf1
    smallestDRGsf2 = -1 #this is the "number" which identifies the mathced gsf2
    for gsf in gsf_electrons:
        DR1 = gsf.p4.DeltaR(gen1.p4)
        DR2 = gsf.p4.DeltaR(gen2.p4)
        
        if DR1 < smallestDR1:
            smallestDR1 = DR1
            smallestDRGsf1 = gsf
        if DR2 < smallestDR2:
            smallestDR2 = DR2
            smallestDRGsf2 = gsf
    
    # If successful (it means we found two matched reco ele), attach the gsf electrons to the gen electrons and chang the status of the gen object
    if smallestDR1 < DeltaRCut:
        gen1.gsf_electron = smallestDRGsf1
        gen1.matched_gsf_electron = True
        gen1.matched_HEEPID = smallestDRGsf1.HEEPID
        gen1.matched_HEEPAcc = smallestDRGsf1.HEEPAcc
        
    if smallestDR2 < DeltaRCut:
        gen2.gsf_electron = smallestDRGsf2
        gen2.matched_gsf_electron = True
        gen2.matched_HEEPID = smallestDRGsf1.HEEPID
        gen2.matched_HEEPAcc = smallestDRGsf1.HEEPAcc
    
    #At this point, the gen eles have specified inside their class if they match a reco (and which one), and if they fire the HEEPID and the HEEPAcc
    # Now make the Z boson
    #For each entry:
    gen_Zboson = Zboson_object(gen1, gen2)
    
    # Now we can fill the histograms!
    regions = gen_Zboson.regions
    if regions=='none':
        continue
    if gen_Zboson.p4.M() < 20:
        continue
    h_mee_gen[regions]            .Fill(gen_Zboson.p4.M()) # just fill with the gen eles
    if gen_Zboson.e1.matched_gsf_electron and gen_Zboson.e2.matched_gsf_electron:
        h_mee_gen_matchedGsf[regions] .Fill(gen_Zboson.p4.M()) #eles gen and reco
    if gen_Zboson.e1.matched_HEEPAcc and gen_Zboson.e1.matched_HEEPID and gen_Zboson.e2.matched_HEEPAcc and gen_Zboson.e2.matched_HEEPID:
        h_mee_gen_matchedHEEP[regions] .Fill(gen_Zboson.p4.M()) #eles gen and heep
        ##Mass resolution (Mreco-Mgen)/Mgen
        reco_Zboson = Zboson_object(gen1.gsf_electron, gen2.gsf_electron)
        reco_mass=reco_Zboson.p4.M()
        reco_Zboson_supercluster = Zboson_object_supercluster(gen1.gsf_electron, gen2.gsf_electron)
        reco_mass_supercluster=reco_Zboson_supercluster.p4.M()

        gen_mass=gen_Zboson.p4.M()
        i=hBase_mee_mr.GetXaxis().FindBin(gen_Zboson.p4.M())

        h_mee_resolution[regions][i]             .Fill((reco_mass-gen_mass)/gen_mass)
        h_mee_resolution_supercluster[regions][i].Fill((reco_mass_supercluster -gen_mass)/gen_mass)
        h_mee_scale[regions][i].Fill(reco_mass/gen_mass)
        h_mee_HoverE[regions][i].Fill(gen1.gsf_electron.HoverE + gen2.gsf_electron.HoverE)
       
        if((gen1.gsf_electron.HoverE + gen2.gsf_electron.HoverE)<=0.01):#below the mean of HoE in barrel (only the good electron)
            h_mee_resolution_HoE_cut[regions][i].Fill((reco_mass -gen_mass)/gen_mass)
            h_mee_scale_HoE_cut[regions][i].Fill(reco_mass/gen_mass)

#loop over entries finished


file_mass= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.root','RECREATE')
file_mass.cd()
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        h_mee_resolution[regions][i]              . Write()
        h_mee_resolution_supercluster[regions][i] . Write()
        h_mee_scale[regions][i]                   . Write()
        h_mee_HoverE[regions][i]                  . Write()
        h_mee_resolution_HoE_cut[regions][i]      . Write()
        h_mee_scale_HoE_cut[regions][i]           . Write()

hBase_mee_mr.Write()
#This dummy histogram is used to decide the mass binning

