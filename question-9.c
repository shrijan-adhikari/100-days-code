#include <stdio.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount = 1.0;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest 
    for(int i = 0; i < (int)time; i++) {
        amount *= (1 + rate / 100);
    }
    compound_interest = principal * amount - principal;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}