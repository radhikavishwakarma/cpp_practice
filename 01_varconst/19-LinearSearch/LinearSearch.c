#include <stdio.h>
int main(void)
{
    int arr[] = {10, 11, 7, 8, 2, 9};
    int elementToBeSearched = 19;
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != elementToBeSearched)
        {
            elementToBeSearched = arr[i];
        }
        
    }
    printf("19 not found in the array");
    
    return 0;
}