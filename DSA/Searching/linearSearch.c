#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 40, 33, 56, 78, 333, 987};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;

    printf("Enter the element to search : ");
    scanf("%d", &element);
    int indexOfElement = linearSearch(arr, size, element);

    if (indexOfElement == -1)
    {
        printf("%d is not found in the array\n", element);
    }
    else
    {
        printf("%d is found at index : %d ", element, indexOfElement);
    }

    return 0;
}