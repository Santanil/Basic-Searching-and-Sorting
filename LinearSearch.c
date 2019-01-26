#include<stdio.h>

int ls(int arr[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(arr[i]==key)
			return i;
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
		
	pos = ls(arr,element,n);
	if(pos==-1)
		printf("Element not found!");
	else
		printf("The element is present in position: %d",pos+1);
}
