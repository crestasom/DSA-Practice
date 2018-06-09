#include<stdio.h>
#define SIZE 100

int hashTable[SIZE];

void insert(int item)
{
    int hashKey=item%SIZE;
    if(hashTable[hashKey]==0)
    {
        hashTable[hashKey]=item;
    }else
    {
        printf("Collision Detected..Could Not add item");
    }
}

int search(int item)
{
    int hashKey=item%SIZE;
    if(hashTable[hashKey]==item)
    {
        return hashKey;
    }
    return -1;

}

void delete(int item)
{
    int hashKey=item%SIZE;
    if(hashTable[hashKey]==item)
    {
        hashTable[hashKey]=0;
        printf("\n%d has been removed",item);

    }else
    {
        printf("\nItem Not found in hash list");
    }
}

main()
{
    int i,searchKey;
    for(i=0;i<SIZE;i++)
        hashTable[i]=0;
    insert(20);
    insert(34);
    insert(235);
    insert(567);
    insert(876);
    insert(233);
    insert(435);
    searchKey=search(235);
    if(searchKey!=-1)
    {
        printf("\nItem found at %d index",searchKey);
    }
    else
    {
        printf("\nItem Not found in hash list");
    }
    delete(235);
    searchKey=search(235);
    if(searchKey!=-1)
    {
        printf("\nItem found at %d index",searchKey);
    }
    else
    {
        printf("\nItem Not found in hash list");
    }
}
