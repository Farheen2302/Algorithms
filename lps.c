#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int max(int,int);

int main()
{
    char *str =malloc(sizeof(char)*100);
    int ret,l;
    printf("Enter the string\n");
    scanf("%[^\n]%*c",str);
    l = strlen(str);
    ret = find_lps(str,0,l-1);
    printf("The length of the longest pallindrome = %d\n",ret);
    return 0;
}

int find_lps(char *str,int i ,int j)
{
    if(i==j)
        return 1;
    if(str[i]==str[j]&&j == i+1)
        return 2;
    if(str[i]==str[j])
        return find_lps(str,i+1,j-1)+2;
    
    return max(find_lps(str,i+1,j),find_lps(str,i,j-1));
    }
   
 int max(int m,int n)
 {
    if(m>n)
        return m;
     else
        return n;
 }
        
