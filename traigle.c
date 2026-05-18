#include <stdio.h>

main()

{
	float oneangle , twoangle, ca ;
	
	printf("one angle :  \n");
	scanf("%f",&oneangle );
	
	printf("two angle : \n ");
	scanf ("%f ", &twoangle);
	
	ca = 180 - oneangle +twoangle;
	printf("three angle is : %f",ca);
}
