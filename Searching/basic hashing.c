#include<stdio.h>
#define SIZE 100

int hashTable[SIZE];

void insert(int item)
{
    int hashKey=item%SIZE;
    if(hashTable[hashKey]==0)
    {
        hashTable[hashKey]=item;
        printf("%d added at index %d",item,hashKey);
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
    int i,searchKey,ch,num;
    for(i=0;i<SIZE;i++)
        hashTable[i]=0;
        
    while(1)
    {
    	system("cls");
    	printf("\Hash Table Program\n1. Insert\n2.Search\n3.Remove\nEnter Your Choice:");
  		scanf("%d",&ch);
  		switch(ch)
  		{
  			case 1:
  				printf("Enter number to insert:");
  				scanf("%d",&num);
  				insert(num);
  				break;
  				
  			case 2:
  				printf("Enter number to search:");
  				scanf("%d",&num);
  				searchKey=search(num);
    			if(searchKey!=-1)
    			{
        			printf("\nItem found at %d index",searchKey);
    			}
  				else
   				{
        			printf("\nItem Not found in hash list");
    			}
  				break;
  				
  		case 3:
  			printf("Enter number to delete:");
  			scanf("%d",&num);
  			searchKey=search(num);
  			delete(num);
  			break;
  			
		}
		getch();
	}
}
