#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
using namespace std;
int binarySearch(int arr[],int first,int last,int x){
    int mid,iterCount=0;
    while(first<=last)
    {
        mid=(first+last)/2;

        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid])
            first=mid+1;
        else
            last=mid-1;
    }
    return -1;
}

int main(void)
{
   int items[]={1,2,5,12,26,33,45,66,76,87};
    int searchIndex,x,i;
    while(1){
        system("CLS");
        for(i=0;i<SIZE;i++){
            cout<<items[i]<<"\t";
        }
        cout<<"\nEnter Value to be searched:"<<endl;
        cin>>x;
        searchIndex=binarySearch(items,0,SIZE-1,x);
        if(searchIndex==-1){
            cout<<"Elements not found in array!!"<<endl;
        }else{
            cout<<"Element found at index "<<searchIndex+1<<endl;
        }
        getch();
    }
}
