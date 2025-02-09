#include <stdio.h>
#include <stdlib.h>
struct dnode
{
    struct dnode *next;
    struct dnode *prev;
    int data;
};
struct dnode *head = NULL;
void add_at_begin()
{
    struct dnode *nw;
    int num;
    printf("\nEnter an integer number: ");
    scanf("%d", &num);
    nw = (struct dnode *)malloc(sizeof(struct dnode));
    nw->prev = NULL;
    nw->data = num;
    nw->next = head;
    head = nw;
}
void append()
{
    struct dnode *nw, *temp;
    int num;
    printf("\nenter an integer no: ");
    scanf("%d", &num);
    nw = (struct dnode *)malloc(sizeof(struct dnode));
    nw->data = num;
    nw->next = NULL;
    if (head == NULL)
    {
        head = nw;
        nw->prev = NULL;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nw;
        temp = nw;
        nw->prev = temp;
    }
}
void add_after()
{
    struct dnode *nw, *temp;
    int num, pos;
    temp = head;
    printf("Enter the position after which u want to insert a node:");
    scanf("%d", &pos);
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\n Position is greater than list: ");
            exit(0);
        }
    }
    nw = (struct dnode *)malloc(sizeof(struct dnode));
    printf("Eneter a new node: ");
    scanf("%d", &num);
    nw->data = num;
    nw->next = temp->next;
    nw->prev = temp;
    temp->next = nw;
   
}
int count()
{
    struct dnode *temp;
    int count1 = 0;
    temp = head;
    while (temp != NULL)
    {
        count1++;
        temp = temp->next;
    }
    return count1;
}
int display()
{
    struct dnode *temp;
    temp = head;
    printf("\nremaining list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void delet()
{
    struct dnode *nw, *old, *temp;
    int key;
    printf("\n Enter the element which u want to delete: ");
    scanf("%d", &key);
    if (head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                if (temp == head)
                {
                    head = temp->next;
                    if (head != NULL)
                    {
                        head->prev = NULL;
                    }
                }
                else
                {
                    old->next = temp->next;
                    if (temp->next != NULL)
                    {
                        temp->next->prev = NULL;
                    }
                }
                free(temp);
                printf("Element %d deleted successfully.\n", key);
                return;
            }
            else
            {
                old = temp;
                temp = temp->next;
            }
        }
        printf("element not found to be deleted");
    }
}
void reverse()
{
    struct dnode *x, *y, *z;
    x = head;
    y = NULL;
    z = NULL;
    while (x != NULL)
    {
        z = x->next;
        x->next = y;
        x->prev = z;
        y = x;
        x = z;
    }
    head = y;
}
void reverseprint()
{
    struct dnode *temp;
    int c = count(), i;
    int a[c];
    temp = head;
    for (i = 0; i < c; i++)
    {
        a[i] = temp->data;
        temp = temp->next;
    }
    printf("reverse using array: ");
    for (i = c - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}
void bubble_sort()
{
    struct dnode *temp1, *temp2;
    int c = count(), temp, i, j;
    for (i = 0; i < c - 1; i++)
    {
        temp1 = head;
        temp2 = temp1->next;
        for (j = i; j < c - i - 1; j++)
        {
            if (temp1->data > temp2->data)
            {
                temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
}
void selection_sort()
{
    struct dnode *temp1, *temp2;
    int n = count(), temp, i, j;
    temp1 = head;
    for (i = 0; i < n - 1; i++)
    {
        temp2 = temp1->next;
        for (j = 0; j < n - i - 1; j++)
        {
            if (temp1->data > temp2->data)
            {
                temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}
int main()
{
    struct dnode *nw, *temp;
    int num, choice = 1;
    while (choice == 1)
    {
        printf("enter an integer: ");
        scanf("%d", &num);
        nw = (struct dnode *)malloc(sizeof(struct dnode));
        nw->data = num;
        nw->next = NULL;
        if (head == NULL)
        {
            head = temp = nw;
            nw->prev = NULL;
        }
        else
        {
            temp->next = nw;
            temp = nw;
            nw->prev = temp;
        }
        printf("do u want to continue(enter 1)?: ");
        scanf("%d", &choice);
    }
    temp = head;
    printf("list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    int x = 1;
    while (x == 1)
    {
        int y;
        printf("\n1. add_at_begin()\n2. append()\n3. add_after()\n4. display()\n5. count()\n");
        printf("6. delet()\n7. reverse()\n8. reverseprint()\n9. bubble_sort()\n10. selection_sort() ");
        printf("\nenter number between 1 to 10: ");
        scanf("%d", &y);
        switch (y)
        {
        case 1:
            add_at_begin();
            display();
            break;
        case 2:
            append();
            display();
            break;
        case 3:
            add_after();
            display();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\ntotal no. of node: %d ", count());
            break;
        case 6:
            delet();
            display();
        case 7:
            reverse();
            display();
            break;
        case 8:
            reverseprint();
            break;
        case 9:
            bubble_sort();
            display();
            break;
        case 10:
            selection_sort();
            display();
            break;
        default:
            break;
        }
        printf("\nDo u want to continue(enter 1)?: ");
        scanf("%d", &x);
    }
}
