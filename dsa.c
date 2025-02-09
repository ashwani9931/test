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
void selection_sort()
{
    struct node *temp1,*temp2;
    int n=count(),temp,i,j;
     temp1=head;
    for(i=0;i<n-1;i++)
    {
       
        temp2=temp1->next;
        for(j=0;j<n-i-1;j++)
        {
            if(temp1->data>temp2->data)
            {
                temp=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp;
            }
            temp2=temp2->next;
            
        }
        temp1=temp1->next;
    }
    temp1=head;
    printf("\nlist: ");
    while(temp1!=NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
}
void bubble_sort()
{
    struct node *temp1,*temp2;
    int n=count(),temp,i,j;
    for(i=0;i<n-1;i++)
    {
        temp1=head;
        temp2=temp1->next;
        for(j=0;j<n-i-1;j++)
        {
            if(temp1->data>temp2->data)
            {
                temp=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    temp1=head;
    printf("\nlist: ");
    while(temp1!=NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
    
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
        for (j = i - 1; j >= 0; j--)
        {
            printf("%d ", a[j]);
        }
    }
}
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
int deletenode()
{
    struct node *old = NULL, *temp;
    if (head == NULL)
    {
        printf("list is empty uable to delete: ");
    }
    else
    {

        int key;
        printf("\nenter the number you want to delete: ");
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
        printf("\nelement is not found to be deleted:\n");
    }
}
void printlist()
{
    struct node *temp = head;
    printf("remaining list: ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}

void add_after()
{
    struct node *nw, *temp;
    int num, i, pos;
    temp = head;
    printf("\nenter position after which you want to insert: ");
    scanf("%d", &pos);
    for (i = 1; i < pos; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nposition is greater then list:");
            exit(0);
        }
    }

    nw = (struct node *)malloc(sizeof(struct node));
    printf("\nenter new node: ");
    scanf("%d", &num);
    nw->data = num;
    nw->next = temp->next;
    temp->next = nw;

    printf("add after list: ");
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void ad_atbegin()
{
    struct node *nw, *temp;
    int num;
    printf("\nenter digit: ");
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

        nw->next = head;
        head = nw;
    }
    temp = head;
    printf("add at beginlist: ");
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
    int key=1;
    while (key ==1)
    {
        int x;
         printf("\n1.add at begin\n2.append\n3.add after\n4.count\n5.reverse(using pointer)\n6.reverse print(using array)\n7.delete node\n8.bubble_sort\n9.selection_sort");
        printf("\nchoose 1 to 9: ");
       
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            ad_atbegin();
            break;
        case 2:
            append();
            break;
        case 3:
            add_after();
            break;
        case 4:
             printf("Number of nodes in the list: %d\n", count());
            break;
        case 5:
            reverse();
            break;
        case 6:
            reverse_print();
            break;
        case 7:
            deletenode();
            printlist();
            break;
        case 8:
            bubble_sort();
            break;
        case 9:
            selection_sort();
            break;
        default:
            printf("invalid input");
            break;
        }
        printf("\nDo u want to continue(enter 1) ? ");
        scanf("%d", &key);
    }
}
