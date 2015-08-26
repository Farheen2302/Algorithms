/**
 * @input A : array of strings termination by '\0'
 * @input n1 : number of strings in array A
 * 
 * @Output string. Make sure the string is '\0' terminated.
 */
char* longestCommonPrefix(char** A, int n1) {
    
    int len;
    int i,j,k=0,flag=0;
    char *str;
    char ch;
    int max_len = strlen(A[0]);
    int min_len =strlen(A[0]);
 
      for(i=0;i<n1;i++)
    {
        len = strlen(A[i]);
        if(max_len<len)
        {
            max_len = len;
        }
         if(min_len>len)
        {
            min_len = len;
        }
    }
    str = (char *)malloc(sizeof(char)* (max_len+1));
    strcpy(str,"\0");
  
    for(i=0;i<min_len;i++)
    {
        ch = A[0][i];
        for(j =1;j<n1;j++)
        {
            if(ch!=A[j][i])
                {
                    flag = 1;
                    break;
                }
        }
        if(flag ==1)
            break;
    }
    for(k=0;k<i;k++)
        str[k]= A[0][k];
    str[k]='\0';
    
    return str;
        
}

