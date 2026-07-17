#include <stdio.h>

int main()
{
    char str[50];
    char *ptr;
    int len = 0;

    printf("Enter any string :");
    scanf("%[^\n]", &str);

    for (ptr = str; *ptr != '\0'; ptr++)
    {
        len++;
    }

    printf("Length of the string : %d", len);
}