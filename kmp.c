#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int tmp[100];
//void match(char * text,char * pat,int t,int p);

int main()
{
//    char *str = malloc(sizeof(char)*100);
   // char *text = malloc(sizeof(char)*100);
    //char *pat = malloc(sizeof(char)*100);
    int i,j,flag = 0,t,p;
    char text[100];
    char pat[100];
    tmp[0]=0;
    i = 0;
     printf("Enter the text\n");
    scanf("%s",text);
    printf("Enter the pattern\n");
    scanf("%s",pat);
    
     t = strlen(text);
     p = strlen(pat);    
    
    for(j=1;j<strlen(pat);)
    {
        if(pat[i]==pat[j])
            {
                tmp[j] = i+1;
                i++;
                j++;
            }
        else
        {
            while(i>0)
            {
                i = tmp[i-1];
                if(pat[i]==pat[j])
                       {    
                            flag = 1;
                            tmp[j]=i+1;
                            i++;
                            j++;
                            break;
                        }
            }
            
            if(flag ==0)
            {   
                tmp[j]=0;
                j++;
            }
      }
      flag = 0;                                
      }
      
      for(i=0;i<strlen(pat);i++)
        printf("%d ",tmp[i]);
        
    i=0;
    j=0;
    flag = 0;
    while(j<t)
    {
        if(text[j] == pat[i])
        {
            i++;
            j++;
         }
         else
         {
             while(i>0)
            {
               // printf("%d ",i);
                i = tmp[i-1];
                if(pat[i]==text[j])
                       {    
                            flag = 1;
                            //tmp[j]=i+1;
                            i++;
                            j++;
                            break;
                        }
            }
            
             if(flag ==0)
            {   
               // tmp[j]=0;
                j++;
            }
          }
       flag = 0;
       if(i==p)
       {
            flag = 1;
            printf("The pattern is present\n");
            break;
        }
  }
  
  if(flag == 0)
        printf("No such pattern is present\n");
        
  }
