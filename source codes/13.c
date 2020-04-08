#include<stdio.h>
#include<stdlib.h>

int main()
{
	

	//making decisions using if-else  statements 

	




	int age;
	char  gender;

	printf("enter your age:");
	scanf(" %d", &age);

	printf("enter your gender(M/F)\n");
	scanf(" %c", &gender);




	if (age>=18)
	{
		printf("You are eligible to vote ");

		if( (gender=='M') ||  (gender=='m') ){
			printf("dude");
		}
		else{
			printf("M'lady");
		}
	}

	else
	{
		printf("You are not eligible to vote");
	}




	return 0;
}
