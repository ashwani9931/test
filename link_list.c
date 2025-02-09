#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=NULL;

    struct node *nw;
    struct node *temp;
    int choice=0 , count = 0, num;
    while (choice !=0)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("enter an integer no:\n");
        scanf("%d", &num);
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
        printf("Do you want to continue(0,1)?");
        scanf("%d", &choice);
    }
    temp = head;
    printf("linked list ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\ntotal number of nodes=%d",count);
  
    return 0;
}