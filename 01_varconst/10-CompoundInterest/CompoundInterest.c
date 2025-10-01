#include <stdio.h>
#include <math.h>
int main(void)

{
    float amount;
    float principal;
    float rate;
    float numberOfTimes;
    float time;
    float compoundInterest;

    printf("Amount: ");
    scanf("%f", &amount);
    printf("Principal: ");
    scanf("%f", &principal);
    printf("Rate: ");
    scanf("%f", &rate);
    rate = rate / 100;
    printf("Time: ");
    scanf("%f", &time);
    printf("numberOfTimes: ");
    scanf("%f", &numberOfTimes);

    amount = principal * pow((1 + rate / numberOfTimes), (numberOfTimes*time));
    compoundInterest = amount -principal;
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}