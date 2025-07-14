// a c program on insert 5 nodes into singly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
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

        printf("Enter the data : ");
        scanf("%d", &newNode->data);
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
        }
    }

    // displaying data of linked list

    temp = head;
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }

    return 0;
}