#include<stdio.h>
#define n 5
int queue[n];
int rear=-1;
int front=-1;

void dequeue();
void enqueue();
void display();
void main ()
{
    int ch;
    printf("\nSelect one:\n 1:enqueue 2:dequeue 3:display\n\t 0:Exit");
   do
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            default : printf("\nEnter a valid data.\n");
        }
    }while(ch!=0);
}
void enqueue()
{
    int x;
    if(rear== n-1)
        printf("\nOverflow\n");
    else if (rear==-1&&front==-1)
    {
        printf("\nEnter data:");
        scanf("%d",&x);
        rear++;
        front++;
        queue[rear]=x;
    }
    else
    {
        printf("\nEnter data:");
        scanf("%d",&x);
        rear++;
        queue[rear]=x;
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
       printf("%d\n",queue[front]);
       front++;
    }

}

void display()
{
    if(front==-1)
        printf("\nUnderflow\n");
    else
    {
        for(int i=front;i<=rear;i++)
            printf(" %d",queue[i]);
    }
    printf("\n");
}