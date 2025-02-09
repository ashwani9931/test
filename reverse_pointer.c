#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter element of an arrey: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *x=&a[0];
    printf("array in reverse order using pointer: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(x+i));
    }
}