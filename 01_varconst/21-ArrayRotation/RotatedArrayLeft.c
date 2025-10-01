#include <stdio.h>
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Before sorting array\n");
    for (int  i = 0; i < n; i++)
    {
          printf("%d ", arr[i]);
    }

    // Rotation Logic
    int first = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    printf("\nAfter Sorting Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



