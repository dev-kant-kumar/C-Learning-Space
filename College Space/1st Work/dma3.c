#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *ptr, totalPrice = 0;

    ptr = (float *)calloc(5, sizeof(float));

    printf("Enter the price of product as asked below\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Product %d : ", i + 1);
        scanf("%f", &ptr[i]);
        totalPrice += ptr[i];
    }
    printf("Total price : %.2f\n", totalPrice);
    realloc(ptr, 10);
    totalPrice = 0;

    printf("Enter the price of product as asked below\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Product %d : ", i + 1);
        scanf("%f", &ptr[i]);
        totalPrice += ptr[i];
    }

    printf("Total price : %.2f", totalPrice);

    free(ptr);

    return 0;
}