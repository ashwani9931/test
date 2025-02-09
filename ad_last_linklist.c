#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *nw;
    struct node *temp;
    int choice, count = 0, num;

   
    while (1)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        if (nw == NULL)
        {
            printf("Memory allocation failed\n");
            return -1;
        }

        printf("Enter an integer number:\n");
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

        printf("Do you want to continue (0 to stop, 1 to continue)? ");
        scanf("%d", &choice);
        if (choice == 0)
            break;
    }

    
    printf("Enter an integer number to add at the end of the list:\n");
    scanf("%d", &num);

    nw = (struct node *)malloc(sizeof(struct node));
    if (nw == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    nw->data = num;
    nw->next = NULL;

    if (head == NULL)
    {
        head = nw;
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
    printf("Updated linked list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nTotal number of nodes = %d\n", count + 1);

    return 0;
}
