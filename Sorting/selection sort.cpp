#include<stdio.h>

//Selection Sort Function
void selectionSort ( int A[], int n)
{
	int i , j, small, temp;
	for( i=0 ; i < n-1 ; i++)
	{
 		small = i;
 		//finding smallest element in unsorted array
 		for( j=i+1 ; j < n ; j++)
 		{
		 	if ( A[j] < A[small] )
  				small = j;
  		}
 		temp = A[i];
 		A[i] = A[small];
 		A[small] = temp;
 	}
}


main(){

	int arr[]={10,4,12,34,65,11,77};
	int i=0,n=7;
	printf("\nBefore Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	selectionSort(arr,n);
	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}

