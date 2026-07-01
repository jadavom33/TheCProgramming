#include <stdio.h>

main()
{

int swich , a, b;

for (;;)

{
    printf("\n press 1 For +\n");
    printf("\n press 2 For -\n");
    printf("\n press 3 For *\n");
    printf("\n press 4 For /\n");
    printf("\n press 5 For %%\n");
    printf("\n press 0 For EXIT\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &swich);

    if(swich == 0)
    break;

    printf("ENTER FIRST NUMBER : ");
    scanf("%d", &a);

     printf("ENTER SECOND NUMBER : ");
    scanf("%d", &b);

    switch(swich)
     {
        case 1:
        add (a,b);
        break;

        case 2:
        sub (a,b);
        break;

        case 3:
        mul (a,b);
        break;

        case 4:
        divi (a,b);
        break;

        case 5:
        mod (a,b);
        break;

        default:
        printf("INVALID CHOICE ! \n");
     }
}
}
