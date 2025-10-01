#include <stdio.h>
int main(void)
{
    int numbers[] = {10, 22, 45, 25};
    int i,
    sum = 0;
    float avarage;

    int numbers_size = sizeof(numbers);
    int int_size = sizeof(int);
    int numbers_elements = numbers_size / int_size;

    for (int i = 0; i < numbers_elements; i++)
    {
        sum = sum + numbers[i];
    }
    
    avarage = (float)sum / numbers_elements;

    printf("Avarage = %.2f\n", avarage);


    return 0;
}