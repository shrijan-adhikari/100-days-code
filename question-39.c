#include <stdio.h>
int main()
{
    printf ("enter required no.= ");
    int n,prod=1,count=1,x;
    scanf("%d", &n);
    while (n!=0)
    {
        x=  n%10;
        if (x%2!=0){
        prod*=x;
        count ++;
        }
        n=n/10;

    }

if (count==1)
printf ("1 (no odd digits, assume 1)");
else 
printf ("%d",prod);
return 0;
}