#include <stdio.h>

int main()
{
    int n;
    long long product = 1;
    int found_even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
        found_even = 1;
    }

    if (found_even)
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}