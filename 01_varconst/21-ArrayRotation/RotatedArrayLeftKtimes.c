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
        int first = arr[0];

        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;  
    }
    
    printf("\nAfter Sorting Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



