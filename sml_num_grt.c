#include <stdio.h>
#include <stdlib.h>
#define N 10

struct ret
{
    int flag;
    int index;
 };
 
 struct ret findnum(int arr*,int l);
   
int main()
{
    int arr[10];
    struct ret stc;
    printf("Enter the elements\n");
    
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    
    stc = findnum(arr,N);
    if(stc.flag == 1)
    {
        printf("The num is present at %d\n",stc.index);
       }
    else
    {   
        printf("The No such number is present\n");
       }
   
   return 0;
  }
 
 struct ret findnum(int arr*,int l)
 {
    int i;
    int max=arr[0];
    int p = 0;
    int d = 1;
    struct ret stc;
    
    for(i = 1;i<l;i++)
    {
        if(d==0)
        {
            if(arr[i]>max)
            {
                p = i;
                d=1;
               }
            }
        else if(d==1)
        {
            if(arr[i]<arr[p])
            {
                d = 0;
             }
        }
        if(arr[i]>max)
            max = arr[i];
     }
     
     stc->flag = d;
     stc->index = p;
    return stc;
  }
