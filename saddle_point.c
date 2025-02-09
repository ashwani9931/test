#include <stdio.h>

void main()
{
    int i, j, n, f = 0;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n][n];
    printf("enter element: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        int min = a[i][0];
        int c = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                c = j;
            }
        }
        int max = a[0][c];
        for (int k = 0; k < n; k++)
        {
            if (a[k][c] > max)
            {
                max = a[k][c];
            }
        }
        if (min == max)
        {
            printf("saddle point: %d", max);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("saddle point not found: ");
    }
}