#include<stdlib.h>
#include <stdio.h>
     
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
 
 
struct node
{
        int data;
        struct node *next;
};
struct node *head= '\0' ;
int main()     
{
        int ch;
        printf("\nSelect one:\n 1:Create\t2:Display & Length\n3:Insert at Begin\t4:Insert at End\t5:Insert at Position\n6:Delete at Begin\t7:Delete at End\t8:Delete at Position\n0:Exit");
        do
        {  
                printf("\nEnter your choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 0:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }while(ch!=0);
        return 0;
}
void create()
{
        struct node *newnode,*temp;
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("\nEnter the data value for the node:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                temp=head;
                while(temp->next!=NULL)
                {
                        temp=temp->next;
                }
                temp->next=newnode;
        }
}
void display()
{
    int count=0;
        struct node *temp;
        if(head==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                temp=head;
                printf("\nThe List elements are:\n");
                while(temp!=NULL)
                {
                        printf("%d ",temp->data );
                        temp=temp->next ; count ++;
                }
                printf("\nThe length of the list is %d",count);
        }
}
void insert_begin()
{
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&newnode->data);
        
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                newnode->next=head;
                head=newnode;
        }
}
void insert_end()
{
        struct node *newnode,*temp;
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&newnode->data );
        newnode->next =NULL;
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                temp=head;
                while(temp->next !=NULL)
                {
                        temp=temp->next ;
                }
                temp->next =newnode;
        }
}
void insert_pos()
{
        struct node *temp,*newnode;
        int i,pos;
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&newnode->data) ;
        temp=head;
        newnode->next=NULL;
        if(pos==0)
        {
                newnode->next=head;
                head=newnode;
        }
        else
        {
                for(i=0;i<pos-1;i++) 
                { 
                        temp=temp->next;
                        if(temp==NULL)
                        {
                                printf("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                }
                newnode->next =temp->next ;
                temp->next=newnode;
        }
}
void delete_begin()
{
        struct node *temp;
        if(temp==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                temp=head;
                head=head->next ;
                printf("\nThe deleted element is :%d\t",temp->data);
                free(temp);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(head->next ==NULL)
        {       
                temp=head;
                head=NULL;
                printf("\nThe deleted element is:%d\t",temp->data);
                free(temp);
        }
        else
        {
                temp=head;
                while(temp->next!=NULL)
                {
                        ptr=temp;
                        temp=temp->next;
                }
                ptr->next=NULL;
                printf("\nThe deleted element is:%d\t",temp->data);
                free(temp);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        temp=head;
                        head=head->next ;
                        printf("\nThe deleted element is:%d\t",temp->data);
                        free(temp);
                }
                else
                {
                        temp=head;
                        for(i=0;i<pos;i++) 
                        { 
                                ptr=temp; temp=temp->next ;
                                if(temp==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        ptr->next =temp->next ;
                        printf("\nThe deleted element is:%d\t",temp->data);
                        free(temp);
                }
        }
}
