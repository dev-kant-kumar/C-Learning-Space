// a c program on array multiplication

#include <stdio.h>

int main()
{

    int row1, col1, row2, col2;

    printf("2D Array Multiplication\n\n");

    printf("Enter the dimension info of 1st array\n");

    printf("Enter the no of rows : ");
    scanf("%d", &row1);

    printf("Enter the no of cols : ");
    scanf("%d", &col1);

    printf("Enter the dimension info of 2nd array\n");

    printf("Enter the no of rows : ");
    scanf("%d", &row2);

    if (row2 != col1)
    {
        printf("Array multiplication is not possible! Rows of 2nd array must match Cols of 1st array \n");
    }
    else
    {
        printf("Enter the no of cols : ");
        scanf("%d", &col2);

        int array1[row1][col1], array2[row2][col2], result[row1][col2];

        printf("Enter the data element of 1st array \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter [%d][%d] : ", i, j);
                scanf("%d", &array1[i][j]);
            }
        }

        printf("Enter the data element of 2nd array \n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Enter [%d][%d] : ", i, j);
                scanf("%d", &array2[i][j]);
            }
        }

        // initialise the result array with 0
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                result[i][j] = 0;
            }
        }

        // array multiplication and result output
        printf("\nResult of multiplication is below \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    result[i][j] += array1[i][k] * array2[k][j];
                }
                printf("%d \t", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}