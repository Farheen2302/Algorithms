//dynamic approach for the longest pallindrom subsequence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(n, m) ((n>m)?n:m)

int main()
{
    char *str = malloc(sizeof(char)*100);
    int i ,j,l,n,c;
    int arr[100][100];
    printf("Enter the string\n");
    scanf("%[^\n]%*c",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        arr[i][i]=1;
     }
     for(c=2;c<=n;c++)//because we its length
     {
        for(i=0;i<n-c+1;i++)
        {
            j = i+c-1;
            if(str[i]==str[j]&&c==2)
            {
                arr[i][j]=2;
              }
             else if(str[i]==str[j])
             {
                arr[i][j] = arr[i+1][j-1] + 2;
              }
              else
              { 
                arr[i][j] = max(arr[i+1][j],arr[i][j-1]);
               }
          }
      }
      
      
     printf("Longest Palllindrome subsequence is of length %d\n",arr[0][n-1]);
     return 0;
}
