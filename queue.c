#include <stdio.h>
#define max 5
int arr[max];
int front = -1, rear = -1;
void insert()
{
    if (rear == max - 1)
    {
        printf("\nqueue is overflow,unable to insert");
        return;
    }
    int num;
    printf("\nenter an integer");
    scanf("%d", &num);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = num;
        printf("%d is inserted in the queue", num);
    }
    else
    {
        rear++;
        arr[rear] = num;
        printf("%d is inserted in the queue", num);
    }
}
void delet()
{
    if (front == -1 || front > rear)
    {
        printf("\nqueue is empty,unable to delete");
        return;
    }
    else
    {
        printf("\n%d is deleted from the queue", arr[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}
void display()
{
    if (front == -1 || front > rear)
    {
        printf("queue is empty,unable to print");
        return;
    }
    int i;
    printf("\nqueue element are: ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
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
            printf("\ninvalid input");
            break;
        }
        printf("\nDo you want to continue(enter 1)?");
        scanf("%d", &y);
    }
}