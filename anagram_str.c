// anagran=m searching algorithm

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define false 0
#define true 1

 int m;
int compare(int a[300],int b[300]);
void check_ana(char *str,char *pat,int n);

int main()
{
    char *str = malloc(sizeof(char)*100);
    int n;
    char *pat = malloc(sizeof(char)*100);
  
 
    printf("Enter the string\n");
    scanf("%s",str);
     n = strlen(str);
    printf("Enter the pattern\n");
    scanf("%s",pat);
    m = strlen(pat);
    check_ana(str,pat,n);
    return 0;
 }
      
void check_ana(char *str,char *pat,int n)
    {
        int countPat[300];
        int countWin[300];
        int i = 0;
        
        for(i=0;i<256;i++)
            {
                countPat[i]=0;
                countWin[i]=0;
            }
        for(i=0;i<m;i++)
        {
            countPat[pat[i]]+=1;
            countWin[str[i]]+=1;
           // printf("after for\n"); 
        }
        //printf("after for\n");  
              
        for(i=m;i<n;i++)
        {
            if(compare(countPat,countWin))
            {
                printf("Fount at index %d\n",i-m);
            }
           
            countWin[str[i]]+=1;
            
            countWin[str[i-m]]-=1;
            
       }
       if(compare(countPat,countWin))
            {
                printf("Fount at index %d\n",i-m);
            }
 }
                
int compare(int a[300],int b[300])
{
    int i;
    for(i=0;i<256;i++)
    {   
        if(a[i]!=b[i])
        {
            return false;
         }
    }   
    return true;
}
