#include <stdio.h>
int main ()
// question= Write a program to swap two numbers without using a third variable.
{
    int a,b;
    printf ("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
   a = a + b;
    b = a - b;
    a = a - b;
    printf("required swap= %d %d", a,b);
    return 0;
}