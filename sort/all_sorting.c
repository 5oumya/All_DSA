#include<stdio.h>
void selection_sort(int a[],int n)
{
   for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])//condition
                min=j;
        }
        //swap
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])//condition
            {
                int temp=a[j]; //swaping
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void insertion_sort(int a[],int n)
{
    for(int i = 1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key) //condition
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key; //insert
    }
}

void main ()
{
    int a[]={20,41,16,11,31};
    int n1=5;
    selection_sort(a,n1);
    printf("\nSorted by selection:\n");
    for(int i=0;i<n1;i++)
        printf("%d ",a[i]);
    int b[]={25, 93, 51, 59, 14};
    int n2=5;
    bubble_sort(b,n2);
    printf("\nSorted by bubble:\n");
    for(int i=0;i<n2;i++)
        printf("%d ",b[i]);
    int c[]={1, 0, -1, 2, -2};
    int n3=5;
    insertion_sort(c,n3);
    printf("\nSorted by insertion:\n");
    for(int i=0;i<n3;i++)
        printf("%d ",c[i]);
}