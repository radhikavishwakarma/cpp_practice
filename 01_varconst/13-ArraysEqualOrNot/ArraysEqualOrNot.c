#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int arr1[] = {5, 8, 3};
    int arr2[] = {5, 8, 11, 2};

    int arr1_size = sizeof(arr1);
    int arr2_size = sizeof(arr2);
    
    // Function declaration
    bool checkArray(int arr1[], int arr2[], int, int);

    if (checkArray(arr1, arr2, arr1_size, arr2_size))
    {
        printf("Arrays are equal!!!");
    }
    else
    {
        printf("Arrays are not equal!!!");
    }    
    return 0;
}
bool checkArray(int arr1[], int arr2[], int arr1_size, int arr2_size)
{
    int int_size = sizeof(int);

    int arr1_elements = arr1_size / int_size;
    int arr2_elements = arr2_size / int_size;

    if (arr1_elements == arr2_elements)
    {
        // Check all the elements of both arrays
        for (int i = 0; i < arr1_elements; i++)
        {
            if (arr1_elements != arr2_elements)
            {
                return false;
            }  
        }
        return true;
    }
    else
    {
        return false;
    }
}
