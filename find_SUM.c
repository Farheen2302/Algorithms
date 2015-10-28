#include <stdio.h>
#include <stdlib.h>
#define N 10
#define n 3
#define m 3
#define finsum 12

void matsum(int arr[n][m],int i,int j,int sum,int top);
int stack[N];

int main()
{
    int mat[n][m] = {{1,2,3},{4,6,5},{3,2,1}};
    int sum = 0;
    matsum(mat,0,0,0,0);
    return 0;
 }
 
void print(int top)
 {
    int i =0;
    printf("\nThe list is::\n");
    
    for(i=0;i<top;i++)
    {
        printf("%d->",stack[i]);
    }
     printf("\n");
}

void matsum(int arr[n][m],int i,int j,int sum,int top)
{
    if((i==n) && (j==m))
    {
        if(sum == finsum)
            print(top-1);           
        return;
    }
    
    if(sum > finsum)
    {
        return;
    }
    
    if(i<n)
    {   
        stack[top] = arr[i][j];
        matsum(arr,i+1,j,sum+arr[i][j],top+1);
    }
    if(j<m)
    {
        stack[top] = arr[i][j];
        matsum(arr,i,j+1,sum+arr[i][j],top+1);
    }
}
