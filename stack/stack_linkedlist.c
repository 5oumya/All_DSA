#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=0;
void push()
{
    struct node *newnode;
    int x;
    printf("The data :");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("%d is pushed\n",x);
}
void pop()
{
    if(top==0)
        printf("Stack is empty.\n");
    else
    {
        struct node *temp= top;
        top = top-> next;
        temp->next=0;
        printf("%d is popped",temp->data);
        free(temp);
    }
}
void peek()
{
    if(top==0)
        printf("Stack is empty.\n");
    else
    {
       printf("The top data : %d\n",top->data);
    }
}
void display()
{
    struct node *temp=top;
    
    if(top==NULL)
        printf("Stack is empty.\n");
    else
    {
        printf("The Stack is:-\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void main ()
{
    int ch;
    do
    {
        printf("\nEnter choice: \n 1:push \t 2:pop \n 3:peek \t 4:display\n your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:peek();
                break;
            case 4:display();
                break;
        }
    } while(ch != 0);
}
