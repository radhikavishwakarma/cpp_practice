#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int temp;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}