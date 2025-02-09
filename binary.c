#include <stdio.h>
int main()
{
    int n, i, lb = 0, ub, key, mid, flag = 0;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("enter element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter number to check\n");
    scanf("%d", &key);
    ub = n - 1;
    mid = (lb + ub) / 2;
    for (i = mid; lb <= ub; mid = (lb + ub) / 2)
    { 
        if (key == a[mid])
        {
            flag = 1;
            printf("element %d found on index %d ", key, mid);
            break;
        }
        else
        {
            if (key < a[mid])
            {
                ub = mid - 1;
            }
            else
            {
                lb = mid + 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("element %d is not found in array ", key);
    }
}