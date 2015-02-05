import ROOT, math
ROOT.gROOT.SetBatch(ROOT.kTRUE)
ROOT.gROOT.ProcessLine('.L Loader.C+') 

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetPadTickX(1)
ROOT.gStyle.SetPadTickY(1)
ROOT.gStyle.SetFillStyle(ROOT.kWhite)
ROOT.gStyle.SetOptTitle(0)
ROOT.gStyle.SetFrameBorderMode(ROOT.kWhite)
ROOT.gStyle.SetFrameFillColor(ROOT.kWhite)
ROOT.gStyle.SetCanvasBorderMode(ROOT.kWhite)
ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
ROOT.gStyle.SetPadBorderMode(ROOT.kWhite)
ROOT.gStyle.SetPadColor(ROOT.kWhite)
ROOT.gStyle.SetStatColor(ROOT.kWhite)
ROOT.gStyle.SetErrorX(0)

#True if you have to create the histos
#False if you have them and you just want to make your plot
#make_file = True # If you don't have the histo
make_file = False  #if you already produced the histo
canvas = ROOT.TCanvas('canvas','',100,100,800,600)
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

lumi_label_texts = {}
lumi_label_texts['1'  ] = '#int L dt = 1 fb^{-1}'
lumi_label_texts['10'] = '#int L dt = 10 fb^{-1}'
lumi_label_texts['100'] = '#int L dt = 100 fb^{-1}'
lumi_label_texts['300'] = '#int L dt = 300 fb^{-1}'
lumi_labels = {}
for t in lumi_label_texts:
    lumi_labels[t] = ROOT.TLatex(0.5, 0.58, lumi_label_texts[t])
    lumi_labels[t].SetNDC()
lumi_label = lumi_labels['10']
#lumi_label = lumi_labels['1']
lumi = 10 #for the 25 ns scenario, let's consider 10 fb-1
#lumi = 1 #for the 25 ns scenario, let's consider 10 fb-1

beam_label = ROOT.TLatex(0.25, 0.58, '#sqrt{s}=13 TeV')
beam_label.SetNDC()


class MCSample:
    def __init__(self, name, crossSection, nEvents, color):
        self.name = name
        self.crossSection = crossSection
        self.color = color
        self.nEvents = nEvents
        self.effective_luminosity = self.nEvents/self.crossSection

class electron_object:
    def __init__(self, p4):
        self.p4 = p4
    p4 = ROOT.TLorentzVector()

class Z_object:
    def __init__(self, el1, el2):
        self.el1 = el1
        self.el2 = el2
        self.p4 = ROOT.TLorentzVector()
        self.p4 = el1.p4 + el2.p4

ranges = [ 'low' , 'high' ]

hBase_mEE = {}
hBase_mEE['low' ] = ROOT.TH1F('hBase_mEE_low' , '', 100, 0, 1000)
hBase_mEE['high'] = ROOT.TH1F('hBase_mEE_high', '',  75, 0, 7500)
for r in ranges:
    hBase_mEE[r].GetXaxis().SetTitle('m(ee) [GeV]')
    hBase_mEE[r].Sumw2()
    #hBase_mEE[r].SetMinimum(1e-3)
hBase_mEE['low' ].GetYaxis().SetTitle('entries per 10 GeV' )
hBase_mEE['high'].GetYaxis().SetTitle('entries per 100 GeV')

samples = {}
#samples['ZprimeToEE_M1000'    ] = MCSample('ZprimeToEE_M1000'    ,  4.153e-1,  134039, ROOT.kBlack  )
#samples['ZprimeToEE_M5000'    ] = MCSample('ZprimeToEE_M5000'    ,  5.476e-5,  141842, ROOT.kBlack  )
#samples['ZprimeToEEMuMu_M3000'] = MCSample('ZprimeToEEMuMu_M3000',2*1.748e-3,  120600, ROOT.kBlack  )
#samples['ZprimeToEEMuMu_M4000'] = MCSample('ZprimeToEEMuMu_M4000',    1.000,  134039, ROOT.kBlack  ) 
#samples['WW'                  ] = MCSample('WW'                  ,     110.8,  267927, ROOT.kBlue   )
#samples['ttbar'               ] = MCSample('ttbar'               ,     689.1, 2423211, ROOT.kMagenta)
#samples['DYEE'                ] = MCSample('DYEE'                ,    3205.6,  100195, ROOT.kYellow )
#samples['QCD_170_300'         ] = MCSample('QCD_170_300'         ,     1.000, 1384865, ROOT.kRed    )
#samples['QCD_300_470'         ] = MCSample('QCD_300_470'         ,     1.000, 1092335, ROOT.kRed    )
#samples['QCD_470_600'         ] = MCSample('QCD_470_600'         ,     1.000, 1302717, ROOT.kRed    )
#samples['QCD_600_800'         ] = MCSample('QCD_600_800'         ,     1.000, 1417803, ROOT.kRed    )
#samples['QCD_800_1000'        ] = MCSample('QCD_800_1000'        ,     1.000,  513422, ROOT.kRed    )
#samples['QCD_1000_1400'       ] = MCSample('QCD_1000_1400'       ,     1.000, 1349500, ROOT.kRed    )
#samples['QCD_1400_1800'       ] = MCSample('QCD_1400_1800'       ,     1.000, 1412148, ROOT.kRed    )
#samples['QCD_1800'            ] = MCSample('QCD_1800'            ,     1.000, 1448072, ROOT.kRed    )

#PHYS_14_sample
samples['PHYS14_ZprimeToEE_M5000_20bx25'    ] = MCSample('PHYS14_ZprimeToEE_M5000_20bx25'    ,  5.476e-5,  141842, ROOT.kBlack  )
samples['PHYS14_TT_20bx25'                  ] = MCSample('PHYS14_TT_20bx25'                  ,     689.1, 2423211, ROOT.kMagenta)
samples['PHYS14_DYToEE_20BX25'              ] = MCSample('PHYS14_DYToEE_20BX25'              ,    3205.6,  100195, ROOT.kYellow )
samples['PHYS14_QCD_50_80_20bx25'           ] = MCSample('PHYS14_QCD_50_80_20bx25'           ,     1.000, 1384865, ROOT.kRed    )
#samples['PHYS14_QCD_1000_14000_20bx25'      ] = MCSample('PHYS14_QCD_1000_1400_20bx25'       ,     1.000, 1384865, ROOT.kRed    )

#samples['PHYS14_ZprimeToEE_M5000_30bx50'    ] = MCSample('PHYS14_ZprimeToEE_M5000_30bx50'    ,  5.476e-5,  141842, ROOT.kBlack  )
#samples['PHYS14_TT_AVE30BX50'                  ] = MCSample('PHYS14_TT_AVE30BX50'                  ,     689.1, 2423211, ROOT.kMagenta)
#samples['PHYS14_DYToEE_30BX50'              ] = MCSample('PHYS14_DYToEE_30BX50'              ,    3205.6,  100195, ROOT.kYellow )
#samples['PHYS14_QCD_1000_14000_30bx50'      ] = MCSample('PHYS14_QCD_1000_1400_30bx50'       ,     1.000, 1384865, ROOT.kRed    )




if make_file:
    for sname in samples:
        s = samples[sname]
        s.hMEE = {}
        for r in ranges:
            s.hMEE[r] = hBase_mEE[r].Clone('hMEE_%s_%s'%(s.name,r))
            s.hMEE[r].SetFillColor(s.color)
            s.hMEE[r].SetLineWidth(0)
        #s.file = ROOT.TFile('ntuples/outfile_%s.root'%s.name)
        s.file = ROOT.TFile('~/public/HEEP_samples/crab_20150126_%s/outfile_%s.root'%(s.name,s.name))
        s.tree = s.file.Get('IIHEAnalysis')
        print s.name , s.tree.GetEntries()
        s.Zbosons = []
        for i in range(0,s.tree.GetEntries()):
            electrons_p = []
            electrons_m = []
            s.tree.GetEntry(i)
            if i%10000==0:
                print i , '/' , s.tree.GetEntries()
            for j in range(0,s.tree.gsf_n):
                #Asking for HEEP selection; HEEP_cutX is a vector of bool
                #if s.tree.HEEP_cutflow50_25ns_total[j]==False:
                if s.tree.HEEP_cutflow50_50ns_total[j]==False:
                    continue
                el_Et  = abs(s.tree.gsf_energy[j]*math.sin(s.tree.gsf_theta[j]))
                el_eta = s.tree.gsf_eta[j]
                el_phi = s.tree.gsf_phi[j]
                el_E   = s.tree.gsf_energy[j]
                el_p4 = ROOT.TLorentzVector()
                el_p4.SetPtEtaPhiE(el_Et, el_eta, el_phi, el_E)
                el_charge = s.tree.gsf_charge[j]
                if el_charge>0:
                    electrons_p.append(electron_object(el_p4))
                else:
                    electrons_m.append(electron_object(el_p4))
            # Sort by pt
            sorted(electrons_p, key=lambda e: e.p4.Pt())
            sorted(electrons_m, key=lambda e: e.p4.Pt())
            
            if len(electrons_p)*len(electrons_m) == 0:
                continue
                
            Z = Z_object(electrons_p[0], electrons_m[0])
            s.Zbosons.append(Z)
            for r in ranges:
                s.hMEE[r].Fill(Z.p4.M())
    file = ROOT.TFile('histograms.root','RECREATE')
    for sname in samples:
        s = samples[sname]
        for r in ranges:
            s.hMEE[r].Write()
    file.Write()
    file.Close()
else:
    file = ROOT.TFile('histograms.root','READ')
    for sname in samples:
        s = samples[sname]
        s.hMEE = {}
        for r in ranges:
            s.hMEE[r] = file.Get('hMEE_%s_%s'%(s.name,r))
            s.hMEE[r].Scale(1000)
            s.hMEE[r].Scale(lumi/s.effective_luminosity)
            s.hMEE[r].Draw('hist')
            #canvas.Print('plots/hMEE_%s_%s.eps'%(s.name,r))

for r in ranges:# TO DO WHEN YOU HAVE THE SAMPLES
   # samples['ZprimeToEE_M1000'    ].hMEE[r].SetLineStyle(2)
   # samples['ZprimeToEEMuMu_M3000'].hMEE[r].SetLineStyle(5)
     samples['PHYS14_ZprimeToEE_M5000_20bx25'    ].hMEE[r].SetLineStyle(7)
    
   # samples['ZprimeToEE_M1000'    ].hMEE[r].SetLineColor(ROOT.kBlack  )
   # samples['ZprimeToEEMuMu_M3000'].hMEE[r].SetLineColor(ROOT.kGreen+2)
   # samples['ZprimeToEE_M5000'    ].hMEE[r].SetLineColor(ROOT.kRed    )

   # samples['PHYS14_ZprimeToEE_M5000_30bx50'    ].hMEE[r].SetLineStyle(7)

x1 = 0.25
y1 = 0.85
x2 = 0.85
y2 = y1-0.2
legend = ROOT.TLegend(x1,y1,x2,y2)
legend.SetFillColor(0)
legend.SetBorderSize(0)
legend.SetShadowColor(0)
legend.SetNColumns(2)
legend.AddEntry(samples['PHYS14_ZprimeToEE_M5000_20bx25'    ].hMEE[ranges[0]], "Z' (5 TeV)"                  , 'l')
legend.AddEntry(samples['PHYS14_TT_20bx25'                  ].hMEE[ranges[0]], "t#bar{t}"        , 'f')
legend.AddEntry(samples['PHYS14_DYToEE_20BX25'              ].hMEE[ranges[0]], 'Z/#gamma#rightarrowee', 'f')
legend.AddEntry(samples['PHYS14_QCD_50_80_20bx25'           ].hMEE[ranges[0]], "QCD"            , 'f')
#legend.AddEntry(samples['PHYS14_QCD_1000_14000_20bx25'      ].hMEE[ranges[0]], 'QCD'             , 'f')

#legend.AddEntry(samples['PHYS14_ZprimeToEE_M5000_30bx50'    ].hMEE[ranges[0]], "Z' (5 TeV)"                  , 'l')
#legend.AddEntry(samples['PHYS14_TT_AVE30BX50'                  ].hMEE[ranges[0]], "t#bar{t}"        , 'f')
#legend.AddEntry(samples['PHYS14_DYToEE_30BX50'              ].hMEE[ranges[0]], 'Z/#gamma#rightarrowee', 'f')
#legend.AddEntry(samples['PHYS14_QCD_1000_14000_30bx50'      ].hMEE[ranges[0]], 'QCD'             , 'f')


hStack = {}

#'PHYS14_ZprimeToEE_M5000_20bx25'
#'PHYS14_TT_20bx25'              
#'PHYS14_DYToEE_20BX25'          
#'PHYS14_QCD_50_80_30bx50'       



backgrounds = ['PHYS14_DYToEE_20BX25','PHYS14_TT_20bx25','PHYS14_QCD_50_80_20bx25']#,'PHYS14_QCD_1000_1400_20bx25']
#backgrounds = ['PHYS14_DYToEE_30BX50','PHYS14_TT_AVE30BX50']#,'PHYS14_QCD_1000_1400_30bx50'],'PHYS14_QCD_50_80_30bx50']
for r in ranges:
    for l in ['lin','log']:
        hStack[r] = ROOT.THStack()
        for bname in backgrounds:
            hStack[r].Add(samples[bname].hMEE[r])
    
        #min = 1e-2 if l=='log' else 0
        min = 1e-3 if l=='log' else 0
        scale = 1e4 if l=='log' else 1.5
        hStack[r].SetMinimum(min)
        hStack[r].SetMaximum(scale*hStack[r].GetMaximum())
        hStack[r].Draw('hist')
        hStack[r].GetXaxis().SetTitle('m(ee) [GeV]')
        #hStack[r].GetYaxis().SetTitle('entries per 100 GeV')
        hStack[r].GetYaxis().SetTitle(samples[bname].hMEE[r].GetYaxis().GetTitle())
        hStack[r].GetYaxis().SetTitleOffset(1.25)
        hStack[r].Draw('hist')
        for sname in samples:
            if 'Zprime' in sname:
                s = samples[sname]
                s.hMEE[r].SetFillColor(0)
                s.hMEE[r].SetLineWidth(2)
                s.hMEE[r].Draw('sames:hist')
        legend.Draw()
        CMS_label.Draw()
        lumi_label.Draw()
        beam_label.Draw()
        canvas.SetLogy(l=='log')
        canvas.Print('plots/stackMEE_%s_%s.eps'%(r,l))
        #canvas.Print('plots/stackMEE_50_%s_%s.eps'%(r,l))


