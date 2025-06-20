#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 4, 8, 15, 55, 67, 83, 193, 204, 444, 709, 901};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;

    printf("Enter the element to search : ");
    scanf("%d", &element);

    int indexOfSearch = binarySearch(arr, size, element);

    if (indexOfSearch == -1)
    {
        printf("%d is not found in this array\n", element);
    }
    else
    {
        printf("%d is found at index : %d\n", element, indexOfSearch);
    }

    return 0;
}