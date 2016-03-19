#include <iostream>
#include <stdio.h>

 using namespace std;

 int main()
 {
   int T,N,K,P;
   int i =1,p=0,k=1,num;
   scanf("%d\n",&T);
   while(T--)
   {
     scanf("%d",&N);
     scanf("%d",&K);
     scanf("%d",&P);

     scanf("%d",&num);

     while(i<=N)
     {
       if(num!=i)
       {
         p++;
       }
       else if(k<K){
         scanf("%d",&num);
         k++;
       }
       if(p==P)
          break;
        i++;
   }

while(k<K)
  {
  scanf("%d",&num);
  k++;
}

   if(P>(N-K))
   {
     cout<<-1;
   }
   else
    cout<<i;
 }
 return 0;
 }
