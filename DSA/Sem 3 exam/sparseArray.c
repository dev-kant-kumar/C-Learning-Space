// a c program to convert a matrix into sparse array
#include <stdio.h>

int main()
{

    int matrix[3][3] = {
        {0, 0, 5},
        {0, 0, 0},
        {7, 0, 0}};

    int sparse[3][3];
    int k = 0;

    printf("Sparse Array\n");
    printf("row , col , value \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                printf("%d %d %d \n", i, j, matrix[i][j]);
                k++;
            }
        }
    }

    return 0;
}