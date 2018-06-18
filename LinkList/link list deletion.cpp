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


struct Node* deleteFirst(struct Node *head)
{
    struct Node *temp=head->next;
    head=head->next;
    cout<<"Deleted:"<<temp->data<<endl;
    delete(temp);
    return head;
}

void deleteFirstDouble(struct Node** head)
{
    struct Node *temp=(*head)->next;
    (*head)=(*head)->next;
    cout<<"Deleted:"<<temp->data<<endl;
    delete(temp);
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
    //head=deleteFirst(head);
    deleteFirstDouble(&head);
    print(head);
}
