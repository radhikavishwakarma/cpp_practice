#include <stdio.h>
int main(void)
{
    int arr[] = {10, 12, 45, 48, 22, 18};
    int maximum = 0;
    int minimum = arr[0];

    int arr_size = sizeof(arr);
    int int_size = sizeof(int);
    int elements_size = arr_size / int_size;

    for (int i = 0; i < elements_size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }    
    }
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}