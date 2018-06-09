#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int linearSearch(int arr[],int n)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]==n)
            return i+1;
    }
    return -1;
}
main()
{
    int items[]={2,42,5,12,45,66,76,87,33,1};
    int searchIndex,x,i;
    while(1){
        system("CLS");
        for(i=0;i<SIZE;i++){
            printf("%d  ",items[i]);
        }
        printf("\nEnter Value to be searched:");
        scanf("%d",&x);
        searchIndex=linearSearch(items,x);
        if(searchIndex==-1){
            printf("Elements not found in array!!");
        }else{
            printf("Element found at index %d",searchIndex);
        }
        getch();
    }
}
