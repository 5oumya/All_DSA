#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create ()
{
    struct node *new;
    int x;
    printf("Enter data (-1 for no data):");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    else 
    {
        new=(struct node*)malloc(sizeof(struct node));
        new->data=x;
        printf("Enter left Child of %d:\n",x);
        new->left=create();
        printf("Enter right Child of %d:\n",x);
        new->right=create();
    }
    return new;
}

void preorder(struct node *t)
{
    if(t!=NULL)
    {
        printf(" %d",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf(" %d",t->data);
        inorder(t->right);
    }
}
void postorder(struct node *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf(" %d",t->data);
    }
}

int main()
{
    struct node *root;
    root=create();
    printf("The preorder traversal of tree is:\n");
    preorder(root);
    printf("The inorder traversal of tree is:\n");
    inorder(root);
    printf("The postorder traversal of tree is:\n");
    postorder(root);
    return 0;
}

