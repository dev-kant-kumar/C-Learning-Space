#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    int str[30];
    fscanf(fptr, "%s", &str);
    printf("File content : %s", str);
    fclose(fptr);
    return 0;
}