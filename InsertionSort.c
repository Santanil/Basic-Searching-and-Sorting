#include <stdio.h> 
void insertionSort(int *arr, int n) 
{ 
   int i, key, j; 
   for (i = 1; i <= n; i++) 
   { 
       key = arr[i]; 
       j = i; 
       while (j > 0 && arr[j-1] > key) 
       { 
           arr[j] = arr[j-1]; 
           j = j-1; 
       } 
       arr[j]= key; 
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
		
	insertionSort(arr,n-1);
	
	printf("Sorted Array: \n");
	
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]); 
} 
