#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void insert()
{
    struct node *nw;
    nw = (struct node *)malloc(sizeof(struct node));
    printf("\nenter a number: ");
    scanf("%d", &nw->data);
    nw->next = NULL;
    if (front == NULL)
    {
        rear = front = nw;
    }
    else
    {
        rear->next = nw;
        rear = nw;
    }
}
void delet()
{
    if (front == NULL)
    {
        printf("\nqueue is empty,unable to delete: ");
        return;
    }
    else
    {
        printf("\ndeleted value=%d", front->data);
        struct node temp;
        temp = front;
        front = temp->next;
        free(temp);
    }
}
void display()
{
    if (front == NULL)
    {
        printf("\nqueue is empty , unalbe to print");
        return;
    }
    struct node *temp;
    temp = front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int x, y = 1;
    while (y == 1)
    {
        printf("\n1.insert\n2.delete\n3.display");
        printf("\nenter an option: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
        printf("\nDo u want to continue(enter 1)?");
        scanf("%d", &y);
    }
}