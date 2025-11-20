#include <stdio.h>
int main ()
{
    int n;
    
    printf ("enter size of array\n");
    scanf ("%d" ,&n);
    int arr[n];
    printf ("enter value of array\n");
    for (int i=0; i<n; i++)
    scanf ("%d", &arr[i]);
    int max = arr[0];
    int min = arr[0];
    for (int j=0 ; j<n;j++){
    if ( max<arr[j])
    max = arr[j];
    if (min > arr[j])
    min = arr[j];
    else 
    continue;
    }
printf ("max no. = %d \n", max);
printf ("min no. = %d",min);
return 0;

}