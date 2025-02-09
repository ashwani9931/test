#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void addAtBeginning(struct node **head, int num) {
    struct node *nw = (struct node *)malloc(sizeof(struct node));
    nw->data = num;
    nw->next = *head;
    *head = nw;
}

int main() {
    struct node *head = NULL;
    struct node *nw;
    struct node *temp;
    int choice = 1, count = 0, num;

    // Initial list creation
    while (choice != 0) {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("Enter an integer number:\n");
        scanf("%d", &num);
        nw->data = num;
        nw->next = NULL;
        if (head == NULL) {
            head = temp = nw;
        } else {
            temp->next = nw;
            temp = nw;
        }
        printf("Do you want to continue (0,1)? ");
        scanf("%d", &choice);
    }

    // Add a new element at the beginning
    printf("Enter a new integer to add at the beginning:\n");
    scanf("%d", &num);
    addAtBeginning(&head, num);

    // Print the updated linked list
    temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal number of nodes = %d\n", count);

    return 0;
}
