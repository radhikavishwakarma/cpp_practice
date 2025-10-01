#include <stdio.h>
int main(void)
{
    int arr[] = {7, 50, 12, 10, 20, 5, 17};
    int n = 7;
    int largest = -1;
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }      
    }

    printf("Second Largest number: %d", secondLargest);
    
    return 0;
}