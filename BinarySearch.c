#include<stdio.h>

int binarySearch(int arr[],int low,int high,int key)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]<key)
			low=mid+1;
		else if(arr[mid]>key)
			high=mid-1;
		else
			return mid;
		
	}
	return -1;
}


int main()
{
	int i,n,element,pos,arr[10];
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter the element to be searched: ");
	scanf("%d",&element);
		
	pos = binarySearch(arr,0,n,element);
	if(pos==-1)
		printf("Element not found!");
	else
		printf("The element is present in position: %d",pos+1);
}
