#include <stdio.h>

main()
{
	int x,y,z ;
	int sum  = 0;
	
	printf("Enter velau of number : ");
	scanf("%d", &x);
	y=x;
	
	while(y!=0)
	{
		z=y%10;
		sum = sum+ z*z*z;
		y=y/10;
		
	}
	
	
	if(x==sum)
	{
		printf("%d is aram strong number " , x);
		
	}
	else
	{ 
	printf("armstrong envalide");
	}
	
	
}
