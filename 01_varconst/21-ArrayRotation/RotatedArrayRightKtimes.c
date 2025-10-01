#include <stdio.h>
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;

    printf("Before sorting array\n");
    for (int  i = 0; i < n; i++)
    {
          printf("%d ", arr[i]);
    }

    // Rotation Logic
    for (int i = 0; i < k; i++)
    {
        int last = arr[n - 1];

        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    
    printf("\nAfter Sorting Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



