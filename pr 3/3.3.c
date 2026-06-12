#include <stdio.h>

main()
{
	int sallu, m ,o, sum=0;
	
	printf("Enter your number : ");
	scanf("%d", &sallu);
	
	o=sallu;
	 
	do
	{
		m=sallu%10;
		sum+=m;
		sallu=sallu/100;
			
	}while(sallu!=0);
	
	printf("sum : %d", sum);
}

