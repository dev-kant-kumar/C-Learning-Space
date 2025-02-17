// C program to illustrate the basic input and output using
// printf() and scanf()
#include <stdio.h>

int main()
{
    int roll_num;
    char name[50];

    printf("Entering ");
    // taking input using scanf
    scanf("Enter Roll No.: %d", &roll_num);
    scanf("Enter Name: %s", name);

    // printing output using printf
    printf("Name is %s and Roll Number is %d", name,
           roll_num);

    return 0;
}
