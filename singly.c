#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node* next;
};

int main()
{

    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    if (head == NULL || second == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    head->data = 10;
    head->next = second;

    second->data = 20;dtaahdy hin e
    second->next = NULL;


    struct node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }


    printf("NULL\n");


    free(head);
    free(second);

    return 0;
}
