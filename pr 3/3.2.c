#include <stdio.h>

main()
{
	int i=0, o;
	
	printf("Enter your number : ");
	scanf("%d", &o);
	
	 
	do
	{
		i++;
		
		o=o/10;
			
	}while(o!=0);
	
	printf("total num : %d", i);
}

