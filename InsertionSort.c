#include <stdio.h> 
  
/* Function to sort an array using insertion sort*/
void insertionSort(int *arr, int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && *(arr+j) > key) 
       { 
           *(arr+(j+1)) = *(arr+j); 
           j = j-1; 
       } 
       *(arr+(j+1))= key; 
   } 
} 
 
  
/* Driver program to test insertion sort */
void main() 
{ 
    int arr[100];
	int n,i,j;
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	insertionSort(arr,n);
	
	printf("Sorted Array: \n");
	
	for(i=0;i<n;i++)
		printf("%d",*(arr+i)); 
} 
