/* Implementation of Queue using Linked List*/
#include <stdio.h>
#include<stdlib.h>
//#define N 5
void enqueue();
void dequeue ();
void display();
void peek();
struct node 
{
      int data;
      struct node *next;
};
 
struct node *front=0, *rear=0;

 

 int main()
{
 enqueue (6);
 
 //enqueue (9);
 enqueue (0);
 //enqueue(9);
 enqueue (-2);
 display();
 peek();
 dequeue();
 peek();
 display();
 dequeue();
 dequeue();
 display();
}

void enqueue(int X)
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
    printf("\n Enqued Element is %d",X);
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

void dequeue()
{
    struct node*temp;
    temp=front;
    if(front==0 || rear==0)
    {
        printf("underflow");
    }
    else if (front==rear)
    {
        printf("\ndequed element is %d\n",front->data);
        front=rear=0;
        free(temp); 
    }
    else
    {
        printf("\ndequed element is %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
 {
     if(front==0 || rear==0)
    {
        printf("underflow");
    }
    else
    {
        printf("\nfirst element is %d\n",front->data);
    }

}