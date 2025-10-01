#include <stdio.h>
int main(void)
{
    int year = 2020;
    if (year % 4 == 1)
    {
        printf("Is a leap year");
    }
    else
    {
        printf("Is not leap year");
    }
    
    return 0;
}