#include<stdio.h>

void bubbleSort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=(n-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}	
		}	
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
		
	bubbleSort(arr,n-1);
	
	printf("Sorted Array: \n");
	
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
}
