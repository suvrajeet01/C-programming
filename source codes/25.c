#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
	//switch statement
	//used to test variable against several deifferent possibilities or ooptions or cases

	char grade = 'C';

	switch (grade)
	{
		case 'A' : printf("Sweat! \n");
			   break;
		
		case 'B' : printf("Could have tried harder \n");
			   break;
			
		case 'C' : printf("I c you didnt study \n");
			   break;

		case 'D' : printf("You love the D \n");
			   break;
		
		case 'F' : printf("Thats embarrasing \n");
			   break;
		
		default : printf("that doesnt even make sense! \n");


	}

	char grade1;
	printf("Enter your grade (A/B/C/D/F) :");
	scanf(" %c", &grade1);

	switch (grade1)
	{
		case 'A' : printf("Sweat! \n");
			   break;
		
		case 'B' : printf("Could have tried harder \n");
			   break;
			
		case 'C' : printf("I c you didnt study \n");
			   break;

		case 'D' : printf("You love the D \n");
			   break;
		
		case 'F' : printf("Thats embarrasing \n");
			   break;
		
		default : printf("that doesnt even make sense! \n");


	}
	return 0;
}
