#include<stdio.h>
#include<stdlib.h>

int main()
{
	

	//making decisions using if statements 
	//nested if statements
	


	if(4<10)
	{
		printf("Easy one\n");
	}

	if(4>10)
	{
		printf("Easy one\n");
	}

	if(5==5)
	{
		printf("Easy one\n");
	}
	if(5!=5)
	{
		printf("Easy one\n");
	}


	int age;
	char  gender;

	printf("enter your age:");
	scanf(" %d", &age);

	printf("enter your gender(M/F)\n");
	scanf(" %c", &gender);




	if (age>=18)
	{
		printf("You are eligible to vote ");

		if(gender=='M'){
			printf("dude");
		}
		if(gender=='F'){
			printf("M'lady");
		}
	}

	if (age<=18)
	{
		printf("You are not eligible to vote");
	}




	return 0;
}
