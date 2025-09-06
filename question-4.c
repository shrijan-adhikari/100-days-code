#include <stdio.h>
int main()
//question = Write a program to calculate the area and circumference of a circle given its radius
{
    float a;
    printf ("enter the radius of circle: ");
    scanf ("%f",&a);
    printf("\narea= %f", 3.14*a*a);
    printf("\ncircumference= %f", 2*3.14*a);
    return 0;
}