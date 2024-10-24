#include<stdio.h>
//circular queue
#define n 5
int queue[n];
int rear=-1;
int front=-1;

void dequeue();
void enqueue();
void display();

void main ()
{
    enqueue(6);
    enqueue(0);
    enqueue(-2);
    enqueue(4);
    enqueue(7);
    display();
    dequeue();
    //peek();
    display();
}
void enqueue(int x)
{
    
    if(front== (rear+1)%n)
        printf("\nOverflow\n");
    else if (rear==-1&&front==-1)
    {
        rear++;
        front++;
        queue[rear]=x;
        printf("%d is enqueued\n",x);
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=x;
        printf("%d is enqueued\n",x);
    }
}
void dequeue()
{
    
    if(rear==-1&&front==-1)
        printf("\nUnderflow\n");
    else if (rear==front)
    {
        printf("%d\n",queue[front]);
        rear=-1;
        front=-1;
    }
    else
    {
       printf("%d is dequeued.\n",queue[front]);
       front=(front+1)%n;
    }
}

void display()
{
    if(front==-1)
        printf("\nUnderflow\n");
    else
    {
        int i=front;
        do
        {
            printf("%d ",queue[i]);
            // if(i==rear)
            //     break;
            i=(i+1)%n;
        }while(i!=(rear+1)%n);
    }
    printf("\n");
}