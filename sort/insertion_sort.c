#include <stdio.h>
void  main ()
{
    int a[100],n,temp,i,j;
    printf("enter the length:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Sorted array:\n");
    for( i=1;i<n;i++)
    {
        temp=a[i];
        for( j=i-1;j>=0 && a[j]>temp;j--)
            a[j+1]=a[j]; 
        a[j+1]=temp;
    }  
    for(i=0;i<n;i++)
        printf("%d ",a[i]);    
}