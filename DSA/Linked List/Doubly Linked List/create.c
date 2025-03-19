#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} node;

node *start = NULL, *move = NULL, *newNode = NULL;

void createNode();
void displayList();
void freeList();

int main()
{
    createNode();
    displayList();
    freeList();
    return 0;
}

void createNode()
{
    int num;
    char choice;
    printf("Enter the first element : ");
    scanf("%d", &num);
    start = (node *)malloc(sizeof(node));

    if (start == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    start->data = num;
    start->prev = NULL;
    start->next = NULL;
    move = start;

    printf("Do you want to continue (Y/N) : ");
    scanf(" %c", &choice);

    while (choice == 'Y' || choice == 'y')
    {
        printf("Enter next element : ");
        scanf("%d", &num);

        newNode = (node *)malloc(sizeof(node));
        if (newNode == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }
        newNode->data = num;
        newNode->prev = move;
        newNode->next = NULL;

        move->next = newNode;
        move = newNode;

        printf("Do you want to continue (Y/N) : ");
        scanf(" %c", &choice);
    }
}

void displayList()
{
    node *temp = start;

    printf("\nElements of list are as below\n");
    while (temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

void freeList()
{
    node *temp;
    while (start != NULL)
    {
        temp = start;
        start = start->next;
        free(temp);
    }
    printf("\nMemory deallocated successfully\n");
}