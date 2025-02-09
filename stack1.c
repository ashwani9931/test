#include <stdio.h>
#define max 5
int stack[max];
int top = -1;
void push()
{
    if (top == max - 1)
    {
        printf("stack is null,unable to insrt");
    }
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    top++;
    stack[top] = num;
    printf("%d is inserted in the stack", num);
}
void pop()
{
    int temp;
    if (top == - 1)
    {
        printf("\nstack is empty, unable to delete");
    }
    temp = stack[top];
    top--;
    printf("%d is deleted from stack", temp); 
}
int peek()
{
    if (top ==- 1)
    {
        printf("stack is empty");
        return 0;
    }
    return stack[top];
}
void display()
{
    printf("stack is: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}
int main()
{
    int x;
    int y = 1;
    while (y == 1)
    {

        printf("\n****MAIN MENU****");
        printf("\n1.push\n2.pop\n3.peep\n4.display");
        printf("\nenter your choice: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("\nvalue of top of stack: %d", peek());
            break;
        case 4:
            display();
            break;
        default: 
            printf("\ninvalid input");
            break;
        }
        printf("\nDo u want to continue?(enter 1!) ");
        scanf("%d", &y);
    }
}
