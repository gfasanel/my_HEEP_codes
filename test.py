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
#                                 Create canvas, labels                                  #
##########################################################################################
canvas = ROOT.TCanvas('canvas', '', 100, 100, 1200, 800)
canvas.SetGridx()
canvas.SetGridy()

CMS_label_texts = {}
CMS_label_texts['normal'        ] = 'CMS'
CMS_label_texts['internal'      ] = 'CMS internal'
CMS_label_texts['workInProgress'] = 'CMS work in progress'
CMS_labels = {}
for t in CMS_label_texts:
    CMS_labels[t] = ROOT.TLatex(0.65, 0.945, CMS_label_texts[t])
    CMS_labels[t].SetNDC()
CMS_label = CMS_labels['internal']

##########################################################################################
#                                 Create canvas, labels                                  #
###############################################################################
###########
file= ROOT.TFile('/user/gfasanel/public/HEEP_samples/crab_20150126_PHYS14_ZprimeToEE_M5000_20bx25/outfile_PHYS14_%s.root'%sname,'READ')
tree = file.Get('IIHEAnalysis')
nEntries = tree.GetEntries()

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

hBase_Et = ROOT.TH1F('hBase_Et', '', 600, 0, 3000)
hBase_Et.GetXaxis().SetTitle('E_{T}(e) [GeV]')
hBase_Et.GetYaxis().SetTitle('entries per 5 GeV')

hBase_eta = ROOT.TH1F('hBase_eta', '', 300, -3, 3)
hBase_eta.GetXaxis().SetTitle('#eta(e)')
hBase_eta.GetYaxis().SetTitle('entries per 0.02')

h_mee_gen             = {}
h_mee_gen_matchedGsf  = {}
h_mee_gen_matchedHEEP = {}
for regions in ['BB','BE','EE']:
    h_mee_gen[regions]             = hBase_mee.Clone('h_mee_gen_%s'%regions            )
    h_mee_gen_matchedGsf[regions]  = hBase_mee.Clone('h_mee_gen_matchedGsf_%s'%regions )
    h_mee_gen_matchedHEEP[regions] = hBase_mee.Clone('h_mee_gen_matchedHEEP_%s'%regions )

h_Et  = {}
h_eta = {}
for region in ['barrel','endcap']:
    h_Et[region]  = hBase_Et .Clone('h_Et_%s' %region)
    h_eta[region] = hBase_eta.Clone('h_eta_%s'%region)

######## Mass resolution #################################################################
hBase_resolution = ROOT.TH1F('hBase_resolution', '', 100, -0.3, 0.3)
hBase_scale      = ROOT.TH1F('hBase_scale'     , '', 100,  0, 2)

#h_mee_resolution and h_mee_scale depend on region and mass bin
h_mee_resolution = {}
h_mee_scale      = {}

for regions in ['BB','BE','EE']:
    h_mee_resolution[regions]={}
    h_mee_scale[regions]={}

hBase_mee_mr = ROOT.TH1F('hBase_mee_mr', '', 60, 0, 6000)
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+2):# for each mass bin (+2 in case of overflows)
        h_mee_resolution[regions][i] = hBase_resolution.Clone(str('h_resolution_'+regions+'_%d'%i))
        h_mee_scale[regions][i]      = hBase_scale     .Clone(str('h_scale_'+regions+'_%d'    %i))

##########################################################################################
#                                    Now loop and plot                                   #
##########################################################################################
DeltaRCut = 0.15
nEventsWithEE = 0
#nEntries = 1000
nEntries = tree.GetEntries()

print "Number of mass bins ", hBase_mee.GetNbinsX()
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
        gen_mass=gen_Zboson.p4.M()
        i=hBase_mee_mr.GetXaxis().FindBin(gen_Zboson.p4.M())
        #print "matched ", i
        #print "diff", (reco_Zboson.p4.M()-gen_Zboson.p4.M())/gen_Zboson.p4.M()
        h_mee_resolution[regions][i].Fill((reco_mass-gen_mass)/gen_mass)
        #print (reco_Zboson.p4.M()-gen_Zboson.p4.M())/gen_Zboson.p4.M()
        h_mee_scale[regions][i].Fill(reco_mass/gen_mass)
    
    h_Et[gen1.region].Fill(gen1.p4.Pt())
    h_Et[gen1.region].Fill(gen2.p4.Pt())
    
    h_eta[gen1.region].Fill(gen1.p4.Eta())
    h_eta[gen1.region].Fill(gen2.p4.Eta())


#loop over entries finished

file_out= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms.root','RECREATE')
file_out.cd()

for regions in ['BB','BE','EE']:
    h_mee_gen[regions]            .Write()
    h_mee_gen_matchedGsf[regions] .Write()
    h_mee_gen_matchedHEEP[regions].Write()

file_mass= ROOT.TFile('~gfasanel/public/HEEP/Eff_plots/histograms_mass_res.root','RECREATE')
file_mass.cd()
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        h_mee_resolution[regions][i] . Write()
        h_mee_scale[regions][i]      . Write()


##########################################################################################
#                                 Fitting histograms                                     #
##########################################################################################

file_mass.cd()
for regions in ['BB','BE','EE']:
    for i in range(1, hBase_mee_mr.GetNbinsX()+1):# for each mass bin
        hist_res = file_mass.Get(str('h_resolution_'+regions+'_%d'%i))
        hist_res .Fit("gaus")
        hist_scale = file_mass.Get(str('h_resolution_'+regions+'_%d'%i))
        hist_scale .Fit("gaus")
        hist_res.Write()
        hist_scale.Write()

file_mass.Close()



"""
canvas.cd()
for regions in ['BB','BE','EE']:
    h_mee_gen[regions]            .Draw()
    canvas.Print('plots/phys14/h_mee_gen_%s.eps'%regions)
    h_mee_gen_matchedGsf[regions] .Draw()
    canvas.Print('plots/phys14/h_mee_gen_matchedGsf_%s.eps'%regions)
    h_mee_gen_matchedHEEP[regions].Draw()
    canvas.Print('plots/phys14/h_mee_gen_matchedHEEP_%s.eps'%regions)

for region in ['barrel','endcap']:
    h_Et[region].Draw()
    canvas.Print('plots/phys14/h_Et.eps')
    h_eta[region].Draw()
    canvas.Print('plots/phys14/h_eta.eps')
   
""" 
