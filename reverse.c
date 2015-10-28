#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void reverse(char *s,char *r);
void strrev(char *str);

int main()
{
    char *str = malloc(sizeof(char)*100);
    printf("Enter the string\n");
    scanf ("%[^\n]%*c", str);
    reverse(str,str+strlen(str)-1);
    strrev(str);

    printf("The reverse string\n%s\n",str);    
        return 0;
  }
  
void strrev(char *str)
{
//    char *word = malloc(sizeof(char)*20);
    char *start,*end;
    int i =0;
    start = str+0;
    //int j = 0;
    //reverse(str);
    strcat(str," ");
    
    while(*(str+i)!='\0')
    {
        //SMART APPROACH
        
        if(*(str+i)==' ')
        {
            end = str + i;
            reverse(start,end-1);
            start = str + i + 1;
          }
         i++;
    }
  }
  
void reverse(char *s,char *r)
{
    char *p,*temp,*q;
    temp = malloc(sizeof(char));
    for(p=s,q=r;p<q;p++,q--)
    {
        *temp = *p;
        *p = *q;
        *q = *temp;
      }
 }
 
