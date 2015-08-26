/**
 * @input haystack : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input needle : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int strStr(const char* haystack, const char* needle) {
    
    int i=0 ,j=0,index =0,k=0;
    int len_hay,len_need,flag =0;
    
    len_hay = strlen(haystack);
    len_need = strlen(needle);
    
    
    if(len_hay==0 || len_need ==0|| len_hay < len_need)
        return -1;
    else
    {
        while(i<(len_hay-len_need)+1)
        {
            index = i;
            k = i;
            flag = 0;
            while(j<len_need)
            {
                if(*(haystack+k)!=*(needle+j))
                {
                    flag = 1;
                    break;
                }
                j++;
                k++;
                
            }
            
             if(flag == 0)
                  break;
                  
            if(flag == 1)
            {
                j = 0;
                k=0;
            }
            
            i++;   
        }
        
       
    }
    if(flag == 0)
        return index;
    else 
        return -1;
    
}

