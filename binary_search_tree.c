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
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inorder(struct node *root)
{
    if (root != NULL)                                                
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node* prev=NULL;
   if(root!=NULL){
    if(!isBST(root->left)){
        return 0;
    }
    if(prev!=NULL && root->data <= prev->data){
        return 0;
    }
    prev =root;
    return isBST(root->right);
   }
   else{
    return 1;
   }
}
int main()
{
    struct node *p  = createnode(8);
    struct node *p1 = createnode(5);
    struct node *p2 = createnode(9);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(6);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(p);
    printf("\n");
    printf("%d",isBST(p));

    return 0;
}

// Finally The tree looks like this:
    //      4
    //     / \
    //    5   3
    //   / \
    //  2   1  