#include <stdio.h>
int main(void)
{
    int arr[] = {10, 12, 45, 48, 22, 18};
    int n = 6;
    int max = -1;
    int mini;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // update max if a largest number is found
        }  
    }
    printf("Maximum: %d\n", max);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i]; // update mini if a smallest number is found
        }  
    }
    printf("Minimum: %d", mini);
    
    return 0;
}