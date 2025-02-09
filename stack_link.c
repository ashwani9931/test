#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *top;
void push()
{
    struct node *nw;
    nw=(struct node*)malloc(sizeof(struct node));
    printf("enter the number ,you want to insert: ");
    scanf("%d",&nw->data);
    nw->next=top;
    top=nw;
}
void pop()
{
    if(top==NULL)
    {
        printf("\nstack is unable to delete");
        return ;
    }
    struct  node *temp;
    temp=top;
    printf("\ndeleted value= %d",top->data);
    top=top->next;
    free(temp); 
}
int peek()
{
    if(top==NULL)
    {
        printf("stack is empty");
        return 0 ;
    }
    return top->data;
}
void display()
{
    if(top==NULL)
    {
        printf("stack is empty,unable to print");
        return ;
    }   
    struct node *temp;
    temp=top;
    printf("link list is: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int x,y=1;
    while(y==1)
    {
    printf("****MAIN MENU****");
    printf("\n1.push\n2.pop\n3.peek\n4.display");
    printf("\nenter your option: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1: push();
        break;
    case 2:
        pop();
        break;
    case 3:
        printf("the value at the top of stack is: %d",peek());
        break;
    case 4:
        display();
        break;
    default:
    printf("\ninvalid input");
        break;
    }
    printf("\nDo u want to continue?(enter 1)");
    scanf("%d",&y);
    }
}