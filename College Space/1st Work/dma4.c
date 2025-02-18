#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *ptr;
    ptr = (char *)malloc(50 * sizeof(char));

    if (ptr == NULL)
    {
        printf("Somethings went wrong!");
    }

    printf("Enter your name : ");
    scanf(" %49[^\n]", ptr);

    printf("Welcome %s!\n\n", ptr);

    int choice;
    printf("Enter 1 to update your name : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter new name : ");
        scanf(" %49[^\n]", ptr);
        printf("Name updated to : %s\n", ptr);
    }

    free(ptr);

    return 0;
}