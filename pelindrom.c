#include <stdio.h>

main()
{
	int n ,rem ,rev ;
	
	printf("enter your any number : \n");
	scanf("%d", &n);
	 
	 while(n!=0)
	 {
	 
	 rem = n%10;
	   rev = rev * 10  + rem ;
	 n = n/10 ;
     }
}
