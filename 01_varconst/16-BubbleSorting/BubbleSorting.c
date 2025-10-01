#include <stdio.h>

int main(void)
{
    int arr[] = {5, 15, 40, 10, 50};
    int n = 5;
    // Function declaration
    void bubbleSort(int arr[], int);

    printf("Array before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // Function call
    bubbleSort(arr, n);
    printf("\nArray after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// --------------------------------------------------------------------------------------------
void bubbleSort(int arr[], int n) 
{
    int temp;
    for (int i = 0; i < n - 1; i++) 
    {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) 
        {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) 
            {
                // Swap them if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

