#include<stdio.h>
#define SIZE 10

int binarySearch(int arr[],int first,int last,int x){
    int mid,iterCount=0;
    while(first<=last)
    {
        iterCount++;
        mid=(first+last)/2;

        if(x==arr[mid]){
           // printf("\nFound in %d iterations:",iterCount);
            return mid+1;
        }
        else if(x>arr[mid])
            first=mid+1;
        else
            last=mid-1;
    }
    return -1;
}

int main()
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
            printf("\nElements not found in array!!");
        }else{
            printf("\nElement found at index %d",searchIndex);
        }
        getch();
    }
}
