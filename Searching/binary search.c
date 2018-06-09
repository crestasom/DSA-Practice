// C program to implement recursive Binary Search
#include <stdio.h>
#define SIZE 10

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not
   // present in array
   return -1;
}

int main(void)
{
   int items[]={1,2,5,12,26,33,45,66,76,87};
    int searchIndex,x,i;
    while(1){
        system("CLS");
        for(i=0;i<SIZE;i++){
            printf("%d  ",items[i]);
        }
        printf("\nEnter Value to be searched:");
        scanf("%d",&x);
        searchIndex=binarySearch(items,0,SIZE-1,x);
        if(searchIndex==-1){
            printf("Elements not found in array!!");
        }else{
            printf("Element found at index %d",searchIndex);
        }
        getch();
    }
}
