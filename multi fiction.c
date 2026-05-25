#include <stdio.h>

main()
{
	int o,m;
	printf("Enter your any number : ");
	scanf("%d", &o);
	
	for(m = 1; m<=10; m++)
	{
		printf("%d * %d = %d\n", m,o,m*o);
	}
}
