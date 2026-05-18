#include <stdio.h>

main()
{
	float HRA, DA, TA ;
	int b ;
	
	printf("basesalary :  \n ");
	scanf("%d", &b);
	
	printf("HRA :  \n");
	scanf("%f", &HRA);
	 
	printf("DA : \n");
	scanf("%f", &DA);
	
	printf("TA : \n");
	scanf("%f", &TA);
	
	float grosssalary = b + HRA *100/100 + DA *100/100 + TA *100/100 ;
	printf("grosssalary is : %f\n", grosssalary);
	 
}
