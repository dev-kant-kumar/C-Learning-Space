// a c program to insert 5 node in doubly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;

Node *head = NULL, *temp = NULL;

int main()
{
    // inserting 5 nodes

    for (int i = 0; i < 5; i++)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));

        printf("Enter data : ");
        scanf("%d", &newNode->data);
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // displaying data of list

    temp = head;
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }

    return 0;
}