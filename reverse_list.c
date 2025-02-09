#include <stdio.h>
#include <stdlib.h>
struct node

{
    int data;
    struct node *next;
};
struct node *head = NULL;
int count()
{
    struct node *nw, *temp;
    int c = 0;
    temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
int reverse()
{
    struct node *x, *y, *z;

    x = head;
    y = NULL;

    while (x != NULL)
    {
        z = y;
        y = x;
        x = x->next;
        y->next = z;
    }
    head = y;
    printf("\nreverse list(using pointer): ");
    while (y != NULL)
    {
        printf("%d ", y->data);
        y = y->next;
    }
    head=y;
}
int reverse_print()
{
    if (head == NULL)
    {
        printf("list is empty:");
    }
    else
    {
        struct node *temp;
        int i = 0, c = count(), j;
        int a[c];

        temp = head;
        while (temp != NULL)
        {
            a[i++] = temp->data;
            temp = temp->next;
        }
        printf("\nreverse list(using array) : ");
        for (j = i-1; j >= 0; j--)
        {
            printf("%d ", a[j]);
        }
    }
}
int main()
{
    struct node *nw, *temp;
    int num, choice = 1;
    while (choice != 0)
    {
        printf("enter the digit: ");
        scanf("%d", &num);
        nw = (struct node *)malloc(sizeof(struct node));
        nw->data = num;
        nw->next = NULL;
        if (head == NULL)
        {
            head = temp = nw;
        }
        else
        {

            temp->next = nw;
            temp = nw;
        }
        printf("do you want to continue? choose(1to9)");
        scanf("%d", &choice);
    }
    temp = head;

    printf("list: ");
    while (temp != NULL)

    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    reverse_print();
    reverse();

    return 0;
}
