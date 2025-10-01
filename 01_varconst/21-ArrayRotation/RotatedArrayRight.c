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
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("\nAfter Sorting Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



