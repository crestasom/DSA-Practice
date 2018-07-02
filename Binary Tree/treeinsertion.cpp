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
struct Node* insert(struct Node* Node, int key)
{
    /* If the tree is empty, return a new Node */
    if (Node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < Node->key)
        Node->left  = insert(Node->left, key);
    else if (key > Node->key)
        Node->right = insert(Node->right, key);

    /* return the (unchanged) Node pointer */
    return Node;
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
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // print iNoder traversal of the BST
    inorder(root);

    return 0;
}
