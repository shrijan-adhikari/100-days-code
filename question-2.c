#include <stdio.h>
int main()
{
    int a, b, sum, multiply, subs;
    float Quotient;
    printf("type first number:\t");
    scanf("%d", &a);
    printf("\ntype second number:\t");
    scanf("%d", &b);
    sum = a + b;
    subs = a - b;
    multiply = a * b;
    Quotient = (float)a / b;
    printf("sum =%d", sum);
    printf("\ndiff=%d", subs);
    printf("\nproduct=%d", multiply);
    printf("\nQuotient=%f", Quotient);
    return 0;
}
