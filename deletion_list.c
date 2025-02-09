#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int deletenode()
{
    if (head == NULL)
    {
        printf("link list is empty:");
        return -1;
    }
    else
    {
        struct node *temp, *old=NULL;
        int key;
        printf("enter number to you want to delete\n");
        scanf("%d", &key);
        temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                if (temp == head)
                {
                    head = temp->next;
                }
                else
                {
                    old->next = temp->next;
                }
                free(temp);
                 printf("Element %d deleted successfully.\n", key);
                return 0;
            }
            else
            {
                old = temp;
                temp = temp->next;
            }
        }
        printf("element is not found to be deleted:\n");
        return -1;
    }
    

}
void printlist()
{
    struct node *temp=head;
    printf("remaining list: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

int main()
{

    struct node *nw, *temp;
    int choice = 1, num;
    while (choice != 0)
    {

        nw = (struct node *)malloc(sizeof(struct node));
        printf("enter digit\n");
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
        printf("Do you want to continue ? (0,1)");
        scanf("%d", &choice);
    }
    deletenode ();
    printlist();
    
   
}
