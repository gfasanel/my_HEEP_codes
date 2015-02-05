source setter.sh

date=20150126

declare -a samples=(
#'PHYS14_ZprimeToEE_M5000_20bx25'     
#'PHYS14_ZprimeToEE_M5000_30bx50'     
#'PHYS14_ZprimeToEE_M5000_40bx25'     
#                                    
#'PHYS14_DYToEE_20BX25'               
#'PHYS14_DYToEE_30BX50'               
                                     
#'PHYS14_DYToEE_Flat20To50BX50'       
#'PHYS14_DYToMM_20BX25'               
#'PHYS14_DYToMM_30BX50'               
#'PHYS14_DYToMM_Flat20To50BX50'       
#                                    
#'PHYS14_TT_AVE30BX50'                
#'PHYS14_TT_20bx25'                   
##'PHYS14_WEnu_20bx25'                 
                                     
#'PHYS14_QCD_50_80_20bx25'            
'PHYS14_QCD_50_80_30bx50'            
#'PHYS14_QCD_80_120_20bx25'           
#'PHYS14_QCD_80_120_30bx50'           
#'PHYS14_QCD_120_170_20bx25'          
#'PHYS14_QCD_120_170_30bx50'          
                                    
'PHYS14_QCD_470_600_20bx25'          
'PHYS14_QCD_470_600_30bx50'          
#'PHYS14_QCD_600_800_20bx25'          
#'PHYS14_QCD_600_800_30bx50'          
'PHYS14_QCD_800_1000_20bx25'         
'PHYS14_QCD_800_1000_30bx50'         
'PHYS14_QCD_1000_1400_20bx25'         
'PHYS14_QCD_1000_1400_30bx50'        
'PHYS14_QCD_1400_1800_20bx25'        
#'PHYS14_QCD_1400_1800_30bx50'        
'PHYS14_QCD_1800_20bx25'             
#'PHYS14_QCD_1800_30bx50'             
)
## declare an array variable


## now loop through the above array
for sample in "${samples[@]}"
do
   echo "$sample"
crab resubmit -d crab_projects/crab_${date}_${sample}/

done

# You can access them using echo "${arr[0]}", "${arr[1]}" also


##

