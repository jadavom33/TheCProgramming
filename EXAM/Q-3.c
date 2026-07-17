#include <stdio.h>

void function(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5.\n", a);
    }
    
    else
    {
        printf("%d is not divisible by both 3 and 5.\n", a);
    }
}

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    function(num);

}