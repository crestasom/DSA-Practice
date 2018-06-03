#include<stdio.h>


//Insertion sort sort function

void insertionSort( int A[], int n)
{
 int i ,value, index;
 for(i=1 ; i<n ; i++)
 {
  value = A[i];
  index = i;
  while ( index > 0 && A[index -1] > value)
  {
   A[index] = A[index -1];
   index = index -1;
  }

 A[index] = value;
 }
}

main(){

	int arr[]={10,4,12,34,65,11,77};
	int i=0,n=7;
	printf("\nBefore Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	insertionSort(arr,n);
	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
