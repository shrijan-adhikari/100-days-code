#include <stdio.h>
int main ()
{   
    int n;
    scanf ("%d", &n);
    int arr [n];
    printf ("enter array values ");
    for (int i=0;i<n;i++)
    scanf ("%d", &arr[i]);
    for (int i=0;i<n;i++)
    printf("values of array %d \n", arr [i]);
    return 0;


}