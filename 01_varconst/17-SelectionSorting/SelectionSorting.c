#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20, 7, 5, 40, 35, 25};
    int n = 7;
    // Function declaration
    void selectionSort(int arr[], int);

    printf("-----------------------------\n");
    printf("Before Sorting Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Function call
    selectionSort(arr, n);

    printf("\n-----------------------------\n");
    printf("After Sorting Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
// ----------------------------------------------------------------
void selectionSort(int arr[], int n)
{
    int miniIndex;
    int temp;

    for (int i = 0; i <= n - 2; i++)
    {
        miniIndex = i;   
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[miniIndex])
            {
                miniIndex = j;
            }
            
        }
        temp = arr[miniIndex];
        arr[miniIndex] = arr[i];
        arr[i] = temp;   
    }
}
