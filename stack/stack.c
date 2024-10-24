#include<stdio.h>
#define n 5
//declare an array of size of n
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
    if(top==n-1) //check the overflow condition. That means there is no place for any new element
        printf("Overflow");
    else
    {    
        int x; //take the input from users
        printf("\nEnter data:");
        scanf("%d",&x); 
        top++; // increment the top to enter the element.
        stack[top]=x; // enter the element in top position. the push operation is successful.
    }
}
void pop()
{
    if(top==-1) // check the underflow conditiion
        printf("\nUnderflow"); 
    else
    {
        printf(" %d",stack[top]); // print the top most element 
        top--; //decrement the top. //pop operation is successful
    }

}
void peek()
{
    if(top==-1) // check the underflow conditiion
        printf("\nUnderflow");
    else
    {
       printf("%d",stack[top]); // print the top most element 
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
