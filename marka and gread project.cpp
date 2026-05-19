#include <stdio.h>

main()
{
	int a ;
	char om;
	
	
	printf("Enter your marks : \n");
	scanf ("%d", &a);
	
	(a<=100 && a>=81) ? 'A' :
	
	(a<=80 && a>=61) ? 'B'  :
	
	(a<=60 && a>=41) ? 'C'  : 
		
     (a<=40 && a>=34) ? 'D' :	
     
     (a<=33 && a>=00) ? 'f' :  'fail' ;
	 
	 printf("ypur gread is %c\n", om);
	   
	 
	 
	 switch (om)
	 {
	 	case'a' :
	 	printf ("excellent work \n");
	 	break;
	 	
	 	case'b':
	 	printf ("well done \n");
	 	break;
	 	
	 		
	 	case'c':
	 	printf ("good job \n");
	 	break;
	 	
	 		
	 	case'd':
	 	printf (" your passed , but you cloud do batter  \n");
	 	break;
	 	
	 	case'f' : 
	 	printf("SORRY , YOU FAILED");
	 	break;
	 	
	 default :
	 	printf("invailed ");
	 	break;
	 	
	 		
	 }
	 
	 if (om != 'f')
	 {
	 	printf("\n you are aligible for the next level____");
	 	
	 	
	 	
	 	
	 }
	 else
	 {
	 	printf("\n\n\n plese try again next time___");
	 }
	 
}
