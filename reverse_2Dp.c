#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter element :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int (*p)[n]=a;
    printf("forward:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("%d ",*(*(p+i)+j));  
        }
        printf("\n");
    }
    printf("backword: \n");

    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
}