#include<stdio.h>
//bubble sort function
void bubbleSort(int A[], int n) {
	int  p , i, temp;
	//Outer loop
	//p is pass number
	for( p=1; p<n ; p++)
 	{
    	//inner loop
   		for( i=0 ; i<n-p ; i++)
   		{
			if(A[i] >A[i+1])
    		{
    			//swapping
    			temp = A[i];
    			A[i] = A[i+1];
    			A[i+1] = temp;
    		}
		}
    }
}

main(){

	int arr[]={10,4,12,34,65,11,77};
	int i=0,n=7;
	printf("\nBefore Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	bubbleSort(arr,n);
	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}

