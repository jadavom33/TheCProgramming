#include <stdio.h>

main()
{
	int i,j,h;
	for (i=5; i>=1;i--)
	{
		for (h=1; h<i; h++)
		{
			printf("  ");
		}
		
			for (j=i; j<=5; j++)
		{
			printf(" %d", j);
		}
		for (j=4; j>=i; j--)
		{
			printf(" %d", j);
		}
		
		printf("\n");
	}
}
