#include <stdio.h>
main()
{
	float base, height;
	
	printf("Enter Base : ");
	scanf("%f", &base);
	printf("Enter Height : ");
	scanf("%f", &height);
	
	printf("Area of Triangle : %.2f", 0.5*base*height);
	
}
