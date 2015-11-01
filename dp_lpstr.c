//dynamic approach for the longest pallindrom subsequence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(n, m) ((n>m)?n:m)

int main()
{
    char *str = malloc(sizeof(char)*100);
    int i ,j,l,n,c;
    int arr[100][100],tmp[100][100];
    printf("Enter the string\n");
    scanf("%[^\n]%*c",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        arr[i][i]=1;
        tmp[i][i]=1;
     }
     for(c=2;c<=n;c++)//because we its length
     {
        for(i=0;i<n-c+1;i++)
        {
            j = i+c-1;
            if(str[i]==str[j]&&c==2)
            {
                arr[i][j]=2;
                tmp[i][j]=1;
              }
             else if(str[i]==str[j]&&tmp[i+1][j-1]==1)
             {
                     arr[i][j] = arr[i+1][j-1] + 2; 
                     tmp[i][j]=1;    //to check if last mactceh or not 
              }
             else
                {
                    arr[i][j] = max(arr[i+1][j],arr[i][j-1]);
                }
             
          }
      }
      
      
      for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
        }
     printf("\n");
     
      for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
            printf("%d ",tmp[i][j]);
        printf("\n");
        }
      
     printf("Longest Palllindrome subsequence is of length %d\n",arr[0][n-1]);
     return 0;
}
