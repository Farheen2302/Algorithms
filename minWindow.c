#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *str = malloc(sizeof(char)*100);
    char *ptr = malloc(sizeof(char)*100);
    int needed[256];
    int visited[256];
    
    int hash[256];
    int i = 0;
    int min =0;
    int max = 0;
    int count = 0;
    int min_length = 0;    
    int start = 0;
    int end = 0;
    
    printf("Enter the given string\n");
    scanf("%[^\n]%*c",ptr);
    printf("Enter the string\n");
    scanf("%[^\n]%*c",str);
    
   for(i = 0;i<strlen(str);i++)
   {
        needed[str[i]]+=1;
   }
  start = 0;
   end = 0;
   for(i=0;i<strlen(ptr);i++)
   {
        if(count<strlen(str))
        {
            
            if(needed[ptr[i]]>=1)
            {
                visited[ptr[i]]++;
                
                if(visited[ptr[i]]<=needed[ptr[i]])
                {
                    count++;
                 }
                if(count == 1)
                    start = i;
                end = i;
                min_length = i+1-start;
                min =start;
                max = i;
            }
        }
        else
        {
            if(ptr[start] == ptr[i])
            {
                start++;
                end = i;     
              while(needed[ptr[start]]==0||visited[ptr[start]]>needed[ptr[start]])
                {
                    if(visited[ptr[start]]>needed[ptr[start]])
                        visited[ptr[start]]--;
                   start++;
                  }
           }
                          
            if((end-start+1)<min_length)
            {
                min = start;
                max = end;
                min_length = end-start+1;
            }
        }
        if(needed[ptr[i]]>=1)
        {
            visited[ptr[i]]++;
         }
        
    }
    printf("The smallest subtring containing the string\n");
    for(i=min;i<=max;i++)
        printf("%c",ptr[i]);         
    printf("\n");
    return 0;
   }
    
    
