#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[],int start,int end)
{
	int i,pivot,pIndex;
	pivot = arr[end];
	pIndex = start;
	for(i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(&arr[i],&arr[pIndex]);
			pIndex++;
		}
	}
	swap(&arr[pIndex],&arr[end]);
	return(pIndex);
}
void quickSort(int arr[],int start,int end)
{
	if(start<end)
	{
		int	pIndex=partition(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}

void main()
{
	int arr[100];
	int n,i,j;
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	quickSort(arr,0,n-1);
	
	printf("Sorted Array: \n");
	
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
}
