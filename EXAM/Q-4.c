#include <stdio.h>

void main() 
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    int *p1 = a;
    int *p2 = b;
    int *p3 = sum;

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", (p1 + i));
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", (p2 + i));
    }

    for (i = 0; i < n; i++) 
    {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }
    printf("Sum of the two arrays:\n"); 
       for (i = 0; i < n; i++) 
        { 
           printf("%d ", *(p3 + i));  
          }
}