#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n;         //creating a node
    n = (struct node *)malloc(sizeof(struct node));  //Allocating memory in heap.
    n->data = data;         //Assigning data
    n->left = NULL;         //Assigning left and right children to null.
    n->right = NULL;        //Assigning left and right children to null.
    return n;           //finally return the created node.
}

int main()
{
    // constructing root node:
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 1;
    p->left = NULL;
    p->right = NULL;

    // constructing second node:
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    // constructing third node:
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 3;
    p2->left = NULL;
    p2->right = NULL;

    // linked the nodes
    p->left = p1;
    p->right = p2;
    return 0;
}