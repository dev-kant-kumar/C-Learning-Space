// memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the numbers as asked below\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter no %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("\nEntered numbers are below\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]);
    }
    return 0;
}