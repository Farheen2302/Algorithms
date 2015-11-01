#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(m,n) (m>n?m:n)

int tmp[100][100];
int lcs(char *,char*,int l,int m);

int main()
{
    char *str1 = malloc(sizeof(char)*100);
    char *str2 = malloc(sizeof(char)*100);
    int tmp[100][100];
    int l,m,i,j;
    printf("Enter the string 1\n");
    scanf("%s",str1);
    
    printf("Enter the string 2\n");
    scanf("%s",str2);
    
    l =strlen(str1);
    m = strlen(str2);
    
    for(i=0;i<=l;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0||j==0)
                tmp[i][j]=0;
           else if(str1[i-1]==str2[j-1])
                tmp[i][j]= 1 + tmp[i-1][j-1];
             else
                tmp[i][j]=max(tmp[i][j-1],tmp[i-1][j]);
       }
    }
    
    printf("The longest subsequence %d",tmp[l][m]);
    
    return 0;
 }
