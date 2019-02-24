#include<stdio.h>
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx,temp; 
    for (i=0;i<=n-1;i++) 
    { 
        min_idx = i; 
        for (j= i+1;j<=n;j++) 
        {
		if (arr[j] < arr[min_idx]) 
            	{
            	min_idx = j; 	
		}
  	}
			
		temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i]=temp;
    } 
} 
int main() 
{ 
    int arr[100];
	int n,i,j;
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	selectionSort(arr,n-1);
	
	printf("Sorted Array: \n");
	
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]); 
} 
