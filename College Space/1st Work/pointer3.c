// A c program on pointer arithmetic

#include <stdio.h>

int main()
{

    float price[5], totalPrice = 0, *ptr;
    ptr = price;

    printf("Enter prices as asked below\n");

    int i = 0;
    while (i < 5)
    {
        printf("Product %d : ", i + 1);
        scanf("%f", (ptr + i));
        totalPrice += ptr[i];
        i++;
    }

    printf("Total Price : %.2f", totalPrice);

    return 0;
}