#include<stdio.h>
void merge(int a[],int n,int mid,int lb,int ub)
{
    int b[n];
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i]; 
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++; }
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++; }
    while (j <= ub) {
        b[k] = a[j];
        j++;
        k++;
    }
    
    
    for(k=lb;k<=ub;k++)
        a[k]=b[k];

}

void mergesort(int a[],int n,int lb,int ub)
{
    if(lb<ub)
    {
    int mid=(lb+ub)/2;
    mergesort (a,n,lb,mid);
    mergesort (a,n,mid+1,ub);
    merge (a,n,mid,lb,ub);
    }
}

void main ()
{
    int n=7;
    int a[]={2, 1, 9, 3, 5, 4, 8};
    int lb=0,ub=n-1;
    mergesort(a,n,lb,ub);
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);   
    
}