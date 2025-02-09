#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void add_begin(){
    struct node *nw;
    int num;
    printf("enter new list value:");
    scanf("%d",&num);
    nw=(struct node*)malloc(sizeof(struct node));
    nw->data=num;
    nw->next=head;
    head=nw;
}
void add_last(){
    struct node *nw,*temp;
    int num;
    printf("enter no. at last:");
    scanf("%d",&num);
    nw=(struct node*)malloc(sizeof(struct node));
    nw->data=num;
    nw->next=NULL;
    if(head==NULL){
        head=nw;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nw;

    }

}
int main()
{
    struct node *nw, *temp;
    int num, choice = 1;
    while (choice != 0)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("enter an integer \n");
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
        printf("do u want to continue(1,0)?\n");
        scanf("%d", &choice);
    }
    add_begin();
    add_last();
    temp = head;
    printf("list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}