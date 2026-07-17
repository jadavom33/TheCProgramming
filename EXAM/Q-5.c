#include <stdio.h>

void main() 
{
    int i, j;

    for (i = 0; i <= 6; i++) 
    {
 
        for (j = 0; j <= i; j++) 
        {
            printf("  ");
        }

        for (j = 10-i; j >= 6; j--) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

}