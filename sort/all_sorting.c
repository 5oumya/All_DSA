#include<stdio.h>
void selection_sort(int a[],int n)
{
   for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
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
            if(a[j]>a[j+1])
            {
                int temp=a[j];
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
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void main ()
{
    int a[]={2, 3, 1, 5, 4};
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
    int c[]={289, 323, 121, 576, 40};
    int n3=5;
    insertion_sort(c,n3);
    printf("\nSorted by insertion:\n");
    for(int i=0;i<n3;i++)
        printf("%d ",c[i]);
}