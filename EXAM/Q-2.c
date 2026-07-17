#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    int array[50] = {0};
    int i;
    char ch;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for(i = 0; i < strlen(str); i++)
    {
        ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            {
                array[ch - 'a']++;
            }
        }
    }

    for(i = 0; i < 50; i++)
    {
        if(array[i] > 0)
        {
            printf("%c : %d\n", i + 'a', array[i]);
        }
    }
}