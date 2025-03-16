// creation of linked list

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void createNode();
void displayList();
void freeList();

node *start, *move, *new;

int main()
{
    system("cls");
    createNode();
    displayList();
    freeList();
    return 0;
}

void createNode()
{
    int num;
    char choice;

    printf("Enter first element : ");
    scanf("%d", &num);

    start = (node *)malloc(sizeof(node));
    start->data = num;
    start->next = NULL;
    move = start;

    printf("Enter y to continue : ");
    scanf(" %c", &choice);

    while (choice == 'y' || choice == 'Y')
    {
        printf("Enter next element : ");
        scanf("%d", &num);
        new = (node *)malloc(sizeof(node));
        new->data = num;
        new->next = NULL;

        move->next = new;
        move = move->next;

        printf("Enter y to continue : ");
        scanf(" %c", &choice);
    }
}

void displayList()
{
    move = start;
    printf("\nElements of list are as below :- \n");
    while (move != NULL)
    {
        printf("%d \n", move->data);
        move = move->next;
    }
}

void freeList()
{
    while (start != NULL)
    {
        move = start;
        start = start->next;
        free(move);
    }
    printf("Memory deallocated successfully\n");
}