#include <stdio.h>

main()
{
	int c=1,i,j;
	for (i=1; i<=4;i++)
	{
		for (j=1; j<=i; j++)
		{
			printf(" %d", c+10);
			c++;
		}
		printf("\n");
	}
}
