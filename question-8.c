#include <stdio.h>
int main ()
// question = Write a program to find and display the sum of the first n natural numbers.
{
    int n, sum;
    printf ("this is a program to find and display the sum of the first n natural numbers.");
    printf("\nenter the value of n=");
    scanf ("%d",&n);
    sum = (n*(n+1))/2;
    printf("\nsum of first n number= %d",sum);
    return 0;


}