#include<iostream>
#define maxNode 20
using namespace std;
int n;
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

    for(i=1;i<=n;i++)
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
    int i, max_edges, origin, destin;

    cout<<"Enter number of nodes : ";
    cin>>n;
    max_edges = n * (n - 1);
    for(int i=0;i<maxNode;i++)
    {
        //create a new head pointer for each vertices
     adjList[i]=new(List);
     adjList[i]->head=NULL;
    }

     for (i = 1; i <= max_edges; i++) {
        cout<<"Enter edge "<<i<<"( 0 0 ) to quit : ";
        cin>>origin>>destin;
        if ((origin == 0) && (destin == 0))
            break;
        if (origin > n || destin > n || origin <= 0 || destin <= 0) {
            cout<<"Invalid edge!\n";
            i--;
        } else
            addNode(origin,destin);
            addNode(destin,origin);
    }
    printList();
}
