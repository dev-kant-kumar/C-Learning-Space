// A c progarm on dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr, total = 0;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Somethings went wrong!");
    }

    printf("Enter your marks as asked below\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d : ", i + 1);
        scanf("%d", &ptr[i]);
        total += ptr[i];
    }
    printf("Total Marks : %d", total);

    free(ptr);

    return 0;
}