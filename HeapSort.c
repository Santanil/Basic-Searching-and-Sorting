#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void max_heapify(int arr[],int heapsize, int i)
{
	int l,r,largest;
	l=2*i+1;
	r=2*i+2;
	
	if(l<heapsize && arr[l]>arr[i])
		largest = l;
	else
		largest = i;
		
	if(r<heapsize && arr[r]>arr[largest])
		largest = r;
		
	if(largest != i)
	{
		swap(&arr[i],&arr[largest]);
		max_heapify(arr,heapsize,largest);
	}
}

void heapSort(int arr[], int heapsize)
{
	int i;
	for(i=(heapsize/2)-1;i>=0;i--)
		max_heapify(arr,heapsize,i);
	for (i=heapsize-1; i>=0; i--) 
    { 
        // Move current root to end 
        swap(&arr[0], &arr[i]); 
  
        // call max heapify on the reduced heap 
        max_heapify(arr, i, 0); 
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
		
	heapSort(arr,n-1);
	
	printf("Sorted Array: \n");
	
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
}
