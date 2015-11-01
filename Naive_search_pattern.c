#include <stdio.h>
#include <string.h>
#include <stdio.h>



int main()
{
    char *text = malloc(sizeof(char)*100);
    char *pattern = malloc(sizeof(char)*100);
    int m,n,i,j;
    
    printf("Enter the TEXT\n");
    scanf("%[^\n]%*c",text);
    
    printf("Enter thr PATTERN to be searched\n");
    scanf("%[^\n]%*c",pattern);
    
    m = strlen(text);
    n = strlen(pattern);
    
    for(i = 0;i<m-n;i++)
    {
            for(j = 0;j<n;j++)
            {
                if(text[i+j]!=pattern[j])
                    break;
             }
           
            if(j==n)
                printf("Pattern found at %d",i);
                
    }
    
 }
