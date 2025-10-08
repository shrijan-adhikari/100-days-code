#include <stdio.h>
int main()
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
