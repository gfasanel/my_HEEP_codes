date=20150128

declare -a samples=(
#'PHYS14_ZprimeToEE_M5000_20bx25'     
#'PHYS14_ZprimeToEE_M5000_30bx50'     
#'PHYS14_ZprimeToEE_M5000_40bx25'     
                                     
'PHYS14_DYToEE_20BX25'               
#'PHYS14_DYToEE_30BX50'               
                                     
#'PHYS14_DYToEE_Flat20To50BX50'       
#'PHYS14_DYToMM_20BX25'               
#'PHYS14_DYToMM_30BX50'               
#'PHYS14_DYToMM_Flat20To50BX50'       
                                     
#'PHYS14_TT_AVE30BX50'                
#'PHYS14_TT_20bx25'                   
#'PHYS14_WEnu_20bx25'                 
                                     
#'PHYS14_QCD_50_80_20bx25'            
#'PHYS14_QCD_50_80_30bx50'            
#'PHYS14_QCD_80_120_20bx25'           
# 'PHYS14_QCD_80_120_30bx50'           
#'PHYS14_QCD_120_170_20bx25'          
#'PHYS14_QCD_120_170_30bx50'          
                                      
#'PHYS14_QCD_470_600_20bx25'          
#'PHYS14_QCD_470_600_30bx50'          
#'PHYS14_QCD_600_800_20bx25'          
#'PHYS14_QCD_600_800_30bx50'          
# 'PHYS14_QCD_800_1000_20bx25'         
#'PHYS14_QCD_800_1000_30bx50'         
#'PHYS14_QCD_1000_1400_20bx25'         
#'PHYS14_QCD_1000_1400_30bx50'        
#'PHYS14_QCD_1400_1800_20bx25'        
#'PHYS14_QCD_1400_1800_30bx50'        
#'PHYS14_QCD_1800_20bx25'             
#'PHYS14_QCD_1800_30bx50'             

#'PHYS14_DYToEEMM_120_200_20bx25__120_200'    
#'PHYS14_DYToEEMM_400_800_20bx25__200_400'    
#'PHYS14_DYToEEMM_2300_3500_20bx25__400_800'  
#'PHYS14_DYToEEMM_7500_8500_20bx25__800_1400' 
#'PHYS14_DYToEEMM_200_400_20bx25__1400_2300'  
#'PHYS14_DYToEEMM_800_1400_20bx25__2300_3500' 
#'PHYS14_DYToEEMM_1400_2300_20bx25__3500_4500'
#'PHYS14_DYToEEMM_3500_4500_20bx25__4500_6000'
#'PHYS14_DYToEEMM_4500_6000_20bx25__6000_7500'
#'PHYS14_DYToEEMM_6000_7500_20bx25__7500_8500'
#'PHYS14_DYToEEMM_8500_9500_20bx25__8500_9500'
#'PHYS14_DYToEEMM_9500_20bx25__9500'          
)
## declare an array variable


## now loop through the above array
for sample in "${samples[@]}"
do
   echo "$sample"
cp crabConfig_skeleton.py crabConfig.py
#Sostituisce XXX con la data. NB Gli apici devono essere doppi, non singoli, altrimenti NON funziona bene la sostituzione
sed -i "s/XXX/${date}/" crabConfig.py
sed -i "s/YYY/${sample}/" crabConfig.py
crab submit
done

# You can access them using echo "${arr[0]}", "${arr[1]}" also


##crab getoutput -d crab_projects/crab_20150122_PHYS14_DYToEE_30BX50/

