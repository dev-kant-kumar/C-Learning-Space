#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter your name : ");
    scanf("%[^\n]s", name);
    printf("Welcome back to c programming %s", name);
    return 0;
}