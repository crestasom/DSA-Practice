#include<iostream>
#define maxNode 4
using namespace std;
typedef struct Node
{
    int vertexNum;
    struct Node *next;
}Node;

typedef struct List
{
    Node *head;
}List;

List *adjList[maxNode]={0};

void printList()
{
    int i;
    Node *temp;
    for(i=0;i<maxNode;i++)
    {
        //cout<<adjList[i]<<"->";
        temp=adjList[i]->head;
        while(temp!=NULL)
        {
            cout<<temp->vertexNum<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
}

void addNode(int s,int d)
{
    Node *src,*dest,*temp;
    if(adjList[s]->head==NULL)
    {
        src=new(Node);
        src->vertexNum=s;
        src->next=NULL;
        adjList[s]->head=src;
    }
    dest=new(Node);
    dest->vertexNum=d;
    dest->next=NULL;
    temp=adjList[s]->head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=dest;
//    printList();
}

main()
{
    int i;
    for(int i=0;i<maxNode;i++)
    {
        //create a new head pointer for each vertices
     adjList[i]=new(List);
     adjList[i]->head=NULL;
    }
    addNode(0,1);
    addNode(0,3);
    addNode(1,2);
    addNode(2,1);
    addNode(2,3);
    addNode(2,0);
    addNode(3,1);
    addNode(3,0);
    printList();
}
