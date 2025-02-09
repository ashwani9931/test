#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void at_begin()
{
    struct node *nw;
    nw = (struct node *)malloc(sizeof(struct node));
    int num;
    printf("enter a number:\n");
    scanf("%d", &num);
    nw->data = num;
    nw->next = head;
    head = nw;
}
int main()
{
    struct node *nw, *temp;
    int choice = 1, count = 0, n;

    while (choice != 0)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("enter num:\n");
        scanf("%d", &n);
        nw->data = n;
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
        printf("do you want to contineu(0,1)?\n");
        scanf("%d", &choice);
    }
    at_begin();
    temp = head;
    printf("list=");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}