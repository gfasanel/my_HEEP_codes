# (serve a dare i permessi di esecuzione) chmod +x crab_retriever.sh
# a questo punto puoi ./crab_retriever.sh


#TO DO: hadd degli output e li metti in PlotMee/ntuples con il giusto nome


#cp  crab_projects/crab_20150122_PHYS14_DYToEE_20X25/results/outfile_3.root               PlotMee/ntuples/outfile_DYEE.root
cp  crab_projects/crab_20150122_PHYS14_TT_20bx25/results/outfile_3.root                  PlotMee/ntuples/outfile_ttbar.root                
#cp  crab_projects/crab_20150122_PHYS14_QCD_50_80_20bx25/results/outfile_3.root           PlotMee/ntuples/outfile_QCD_                
cp  crab_projects/crab_20150122_PHYS14_QCD_470_600_20bx25/results/outfile_3.root         PlotMee/ntuples/outfile_QCD_470_600.root                
cp  crab_projects/crab_20150122_PHYS14_QCD_1000_1400_20bx25/results/outfile_3.root PlotMee/ntuples/outfile_QCD_1000_1400.root                     

cd PlotMee/
python plotMEE.py
