#include <stdio.h>

main()
{
		int i;
		
		for(i=1; i<=10; i++)
		{
			printf("%d\t", i);
			
			if(i==7){
				break;
			}
		}
}
