// A c program to store marks of student and return their sum

#include <stdio.h>

int main()
{
    int *marks, sum = 0;

    printf("Enter the marks as asked below\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter for sub %d : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("Total marks : %d", sum);

    return 0;
}