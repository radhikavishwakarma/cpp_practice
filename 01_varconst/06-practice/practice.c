#include <stdio.h>
int main(void)
{
    int age = 55;
    float totalPurchase = 85.5;

    if (age >= 60 && totalPurchase <= 100)
    {
        printf("you are eligiable for the senior citizen discount.\n");
    }
    else
    {
        printf("you are not eligiable for the senior citizen discount.\n");
    }
    
    return 0;
}