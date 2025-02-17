// A c program based on pointer to pointer

#include <stdio.h>

int main()
{

    int age, *ptr1, **ptr2;

    ptr1 = &age;
    ptr2 = &ptr1;

    printf("Enter age : ");
    scanf("%d", &age);

    printf("You %d right now.\n", **ptr2);

    return 0;
}