#include <stdio.h>
#include <stdlib.h>

struct Product
{
    int productCode;
    char productName[50];
    float productPrice;
} typedef product;

int main()
{
    product *p1;
    p1 = malloc(5 * sizeof(product));

    printf("Enter Product Code : ");
    scanf("%d", &p1->productCode);

    printf("Enter Product Name : ");
    scanf(" %49[^\n]", &p1->productName);

    printf("Enter Product Price : ");
    scanf("%f", &p1->productPrice);

    printf("\nList of Products\n");
    printf("[%d] %s - %.2f", p1->productCode, p1->productName, p1->productPrice);

    free(p1);

    return 0;
}