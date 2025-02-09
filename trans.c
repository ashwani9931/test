#include <stdio.h>
void main()
{
    int i, j, n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n][n];
    printf("enter element :");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int(*p)[n] = a;
    printf("transpose of matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j< n; j++)
        {
            printf("%d ", *(*(p + j) + i));
        }
        printf("\n");
    }
}