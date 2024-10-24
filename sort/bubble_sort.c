#include<stdio.h>

void main()
{
    int n,i,j,temp;
    // printf("enter the length:");
    // scanf("%d",&n);
    // printf("Enter the elements:\n");
    // for(i=0;i<n;i++)
    //     scanf("%d",&a[i]);
    n=6;
    int a[]={4, 0, 2, 9, 1, 5};
    // sorting
    for( i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;   
            }
        }
    }
    printf("The sorted array is:\n");
    for( i=0;i<n;i++)
        printf("%d ",a[i]);   
}

