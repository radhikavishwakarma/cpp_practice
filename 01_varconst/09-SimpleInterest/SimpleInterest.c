#include <stdio.h>
int main(void)
{
    float principle;
    float annualRate;
    float timeInYear;
    float simpleInterest;

    printf("Principle Amount: ");
    scanf("%f", &principle);
    printf("Annual Rate Of Interest: ");
    scanf("%f", &annualRate);
    printf("Year: ");
    scanf("%f", &timeInYear);

    simpleInterest = (principle * annualRate * timeInYear) / 100.0;
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}