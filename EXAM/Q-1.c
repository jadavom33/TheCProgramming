#include <stdio.h>

void main()
{
    int x, y, z, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &x);

    if (x < 100 || x > 999)
    {
        printf("Please enter a 3-digit positive integer.\n");
    }
    else
    {
        y = x / 100;
        z = x % 10;

        sum = y + z;

        printf("Sum of first and last digit = %d\n", sum);
    }

}