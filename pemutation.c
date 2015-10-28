#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *x,char * y);
void permutation(char * str,int j,int n);
int main()
{
    char *str = malloc(sizeof(char)*100);
    int l;
    
    printf("Enter the string\n");
    scanf("%s",str);
    l = strlen(str);
    permutation(str,0,l-1);
    return 0;
   }
   
   
void permutation(char * str,int j,int n)
 {
    int i=j;
    if(j==n)
        printf("%s\n",str);
    for(i = j;i <= n;i++)
    {
        swap(str+j,str+i);
        permutation(str,j+1,n);
        swap(str+j,str+i);
     }
 }
 
void swap(char *x,char * y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
 }
 
