  #include <stdio.h>

main()

{
	int rem,rev=0,b,n,a;
	printf("enter the number:-");
	scanf("%d",&b);
//898  
    a=b; 
	while(b>0)  
	{
		
     		rem=b%10;         
 		rev=rev*10+rem;    
		b=b/10;         
		 
	}
 printf("%d", rev);
	
}                                                          
