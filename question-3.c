#include <stdio.h>
int main()
// Write a program to calculate the area and perimeter of a rectangle given its length and breadth
{
int a,b;
printf("type lenght of rectangle: ");
scanf("%d",&a);
printf("\ntype breadth of rectangle: ");
scanf("%d",&b);
printf("\narea of rectangle = %d", a*b);
printf("\nperimeter of rectangle = %d", 2*(a+b));
return 0;
}