#include<stdio.h>

int main()
{
	
	//shorthand if else 
	//syntax -  (test condition) ? truecode :falsecode ;
	
	char lastname[20];
	printf ("enter your last name: \n ");
	scanf(" %s",lastname);
	(lastname[0] < 'M' ) || (lastname[0] < 'm' ) ? printf("blue team \n") : printf("red team \n") ;





	int friends= 1;
	printf("I have %d friend%s\n", friends , (friends!=1) ? "s" : ""  );

	int friends1= 87;
	printf("I have %d friend%s", friends1 , (friends1!=1) ? "s" : ""  );



	return 0;
}
