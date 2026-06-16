#include <stdio.h>

main()
{
	int i,j,h;
	for (i=5; i>=1;i--)
	{
		for (h=5; h> i; h--)
		{
			printf(" ");
		}
		
			for (j=1; j<=i; j++)
		{
			printf("%d", j%2);
		}
		
		printf("\n");
	}
}
