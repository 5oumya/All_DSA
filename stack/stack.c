#include<stdio.h>
#define n 5
int stack[n];
int top=-1;

void push();
void pop();
void peek();
void display();

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
void push()
{
    
    
    if(top==n-1)
        printf("Overflow");
    else
    {
        int x;
        printf("\nEnter data:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int x;
    if(top==-1)
        printf("\nUnderflow"); 
    else
    {
        
        x=stack[top];
        top--;
        printf(" %d",x);
    }

}
void peek()
{
    int x;
    if(top==-1)
        printf("\nUnderflow");
    else
    {
        x=stack[top];
       printf("%d",x);
    }
}
void display()
{
    if(top==-1)
        printf("\nUnderflow");
    else
    {
        for(int i=top;i>=0;i--)
            printf(" %d",stack[i]);

    }
    printf("\n");
}