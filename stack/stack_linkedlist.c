#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(top==0)
        top=newnode;
    else
    {
        top->next=newnode;
        top=newnode;
    }
    printf("%d is enqueued\n",x);
}
void pop()
{
    if(top==0)
        printf("QUEUE is empty.\n");
    else
    {
        struct node *temp;
        temp=0;
        while()
    }
}
void peek();
void display();


