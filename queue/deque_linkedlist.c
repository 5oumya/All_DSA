
#include <stdio.h>
#include<stdlib.h>
//#define N 5
void enqueue_r();
void dequeue_f();
void enqueue_f();
void dequeue_r();
void display();
void peek_f();
void peek_r();
struct node 
{
      int data;
      struct node *next;
};
 
struct node *front=0, *rear=0;

 

 void main()
{
 enqueue_f(6);
 enqueue_r(9);
 enqueue_f(-2);
 display();
 dequeue_f();
 display();
 dequeue_r();
 display();


}

void enqueue_r(int X)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=X;
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    printf("\n Enqued Element is %d in rear",X);
}
 
 void display()
 {
   struct node *temp;
   if(front==0 && rear==0)
    {
        printf("queue is empty");
        
    }
    else
    {
        temp=front;
        printf("\n Elements are\n");
        while(temp!=0)
        {
         printf("%d  ",temp->data);  
         temp=temp->next;
        }
        
    }
 }

void dequeue_f()
{
    struct node*temp;
    temp=front;
    if(front==0 || rear==0)
    {
        printf("underflow");
    }
    else if (front==rear)
    {
        printf("\ndequeued element is %d\n",front->data);
        front=rear=0;
        free(temp); 
    }
    else
    {
        printf("\ndequeued element is %d\n",front->data);
        front=front->next;
        free(temp);
    }
}

void enqueue_f(int x)
{
     struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        newnode->next=front;
        front=newnode;
    }
    printf("\n Enqued Element is %d in front",x);
}

void dequeue_r()
{
    struct node*temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("underflow");
    }
    else if (front==rear)
    {
        printf("\ndequeued element is %d from last\n",front->data);
        front=rear=0;
        free(temp); 
    }
    else
    {
        while(temp->next!=rear)
            temp=temp->next;
        printf("\ndequeued element is %d from last\n",rear->data);
        free(rear);
        rear=temp;
        rear->next=0;
    }
}