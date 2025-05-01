// A c program on bubble sort

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sizeOfArry;

    printf("Enter the no of elements of array : ");
    scanf("%d", &sizeOfArry);

    int *arr = (int *)malloc(sizeOfArry * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < sizeOfArry; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // sorting array

    for (int i = 0; i < sizeOfArry - 1; i++)
    {
        int isSwapped = 0;
        for (int j = 0; j < sizeOfArry - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwapped = 1;
            }
        }

        if (!isSwapped)
            break;
    }

    // printing sorted array

    printf("Sorted array : ");
    for (int i = 0; i < sizeOfArry; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}