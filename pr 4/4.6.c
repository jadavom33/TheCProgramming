#include <stdio.h>

main()
{
	int i,j,h;
	for (i=1; i<=5;i++)
	{
		
			for (j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		for (h=5; h>i; h--)
		{
			printf("  ");
		}
		for (j=i; j>=1; j--)
		{
			printf("%d", j);
		}
		
		printf("\n"); 
	}
}
