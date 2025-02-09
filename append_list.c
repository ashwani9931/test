#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void append()
{
    struct node *nw, *temp;
    int num;
    printf("enter new node: ");
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
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nw;
    }
    temp = head;
    printf("after append: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *nw, *temp;
    int num, choice = 1;
    while (choice != 0)
    {
        printf("enter digit: ");
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
        printf("do you want to continue? ");
        scanf("%d", &choice);
    }
    temp = head;
    printf("list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    append();
}