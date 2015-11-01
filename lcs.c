#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(m,n) (m>n?m:n)
int main()
{
    char *str1 = malloc(sizeof(char)*100);
    char *str2 = malloc(sizeof(char)*100);
    
    int m,n,ret;
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
   
    m = strlen(str1);
    n = strlen(str2);
   
    ret = lcs(str1,str2,m,n);
    printf("The length of longest subsequence %d\n",ret);
    return 0;
}

int lcs(char *str1,char *str2,int m,int n)
{
    if(m==0||n==0)
    {
        return 0;
       }
    if(str1[m-1]==str2[n-1])
    {
        return 1+lcs(str1,str2,m-1,n-1);     
     }
     else
     {
        return max(lcs(str1,str2,m,n-1),lcs(str1,str2,m-1,n));
     }
}
