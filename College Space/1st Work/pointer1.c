// 1. A c program to swap two variables

#include <stdio.h>

void swap(int *m, int *n);

int main()
{
    int num1, num2;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    printf("\nBefore swap numbers are like below \n");
    printf("1st number : %d | 2nd number : %d \n", num1, num2);

    swap(&num1, &num2);

    printf("\nAfter swap numbers are like below \n");
    printf("1st number : %d | 2nd number : %d \n", num1, num2);

    return 0;
}

void swap(int *m, int *n)
{
    int t;
    t = *m;
    *m = *n;
    *n = t;
}