#include <stdio.h>
int main()
{
    int a,b,hcf=0,lcm;
    printf ("enter two number = ");
    scanf ("%d %d", &a,&b);
    int final=(a<b)?a:b;
    for (int i=1;i<=final;i++)
    {
        if (a%i==0 && b%i==0)
        hcf=i;
        else
    continue;
    }
    lcm=(a*b)/hcf;
    printf("LCM= %d", lcm);    
    return 0; 

}