// C program to demonstrate insert operation in binary search tree
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left, *right;
};

// A utility function to create a new BST Node
struct Node *newNode(int item)
{
    struct Node *temp =  new(Node);
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->key<<endl;
        inorder(root->right);
    }
}

/* A utility function to insert a new Node with given key in BST */
struct Node* insertRecursive(struct Node* rootRef, int key)
{
    /* If the tree is empty, return a new Node */
    if (rootRef == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < rootRef->key)
        rootRef->left  = insertRecursive(rootRef->left, key);
    else if (key > rootRef->key)
        rootRef->right = insertRecursive(rootRef->right, key);

    /* return the (unchanged) Node pointer */
    return rootRef;
}

struct Node* insert(struct Node* rootRef, int key)
{
    struct Node* parent,*current=rootRef;
    struct Node* nNode=newNode(key);
    /* If the tree is empty, return a new node */
    if (rootRef == NULL) return nNode;

    while(current!=NULL)
    {
        parent=current;
        if (key < current->key)
        {
            current=current->left;
        }
        else if (key > current->key)
        {
            current=current->right;
        }
    }
    if(parent->key<key)
    {
        parent->right=nNode;
    }
    else
    {
        parent->left=nNode;

    }
    /* return the (unchanged) node pointer */
    return rootRef;
}


// Driver Program to test above functions
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct Node *root = NULL;
    root = insertRecursive(root, 50);
    insertRecursive(root, 30);
    insertRecursive(root, 20);
    insertRecursive(root, 40);
    insertRecursive(root, 70);
    insertRecursive(root, 60);
    insertRecursive(root, 80);

    // print iNoder traversal of the BST
    inorder(root);

    return 0;
}
