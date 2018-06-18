#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};

 void print(struct Node * head) {
   struct Node* current = head->next;
    //printf("\n\n**Elements in array**\n");
    cout<<"\n\n**Elements in array**\n";
    while (current != NULL) {
        cout<<current->data<<"->";
        current = current->next;
    }
}

void insertLast(int data,struct Node* head)
{

    struct Node* new_node = new(struct Node);
    struct Node* current=head;
    if(new_node == NULL)
    {
        cout<<"Error creating a new node."<<endl;
        exit(0);
    }
    new_node->data = data;
    new_node->next=NULL;

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
}

void insertFirst(int data,struct Node* head)
{
    struct Node* new_node = new(struct Node);
    if(new_node == NULL)
    {
        cout<<"Error creating a new node."<<endl;
        exit(0);
    }
    new_node->data = data;
    new_node->next=head->next;
    head->next=new_node;
}

void insertAfter(int data,int searchKey,struct Node* head)
{
    struct Node* new_node = new(struct Node);
     struct Node* current=head->next;
    if(new_node == NULL)
    {
        cout<<"Error creating a new node."<<endl;
        exit(0);
    }
    new_node->data = data;
    while (current->data != searchKey&&current->next!=NULL) {
        current = current->next;
    }

    if(current->next==NULL)
    {
        cout<<"\nElement not found";
    }
    else
    {
        new_node->next=current->next;
        current->next=new_node;

    }
}
main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    insertLast(23,head);
    insertLast(24,head);
    insertLast(44,head);
    insertLast(22,head);
    insertLast(77,head);
    print(head);
    insertFirst(34,head);
    insertFirst(55,head);
    insertFirst(99,head);
    print(head);
    insertAfter(54,44,head);
    insertAfter(100,202,head);
    print(head);
}
