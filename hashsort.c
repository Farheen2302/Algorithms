#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	 int arr[100];
	int n,i=0,min=0,max=0,j=0;
	int *hash;
	double extime;
	clock_t start,end;
	
	printf("Enter no. of elements::\n");
	scanf("%d",&n);
	start = clock();	
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max = arr[i];
	}
	hash = (int *)calloc((max+1),sizeof(int));
	for(i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	printf("\n");
	
	for(i=1;i<=max;i++)
	{
		if(hash[i]>0)
			printf("%d\t",i);
		j=hash[i];
		if(j==1||j==0)
			continue;
		else
		while(j!=0)
		{
			printf("%d\t",i);
			j--;
		}
	}
	end = clock();
	extime = (double)(end-start)/CLOCKS	_PER_SEC;
	printf("\n \t Execution time ::%lf seconds\n",extime);
}
