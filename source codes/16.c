#include<stdio.h>

int main()
{
	//testing multiple conditions
	//OR


	char answer;


	printf("Do you like chocolates? (Y/N) ");
	scanf(" %c", &answer);

	if( (answer=='y') ||  (answer=='n') ){
		printf("Good job,you didn't mess anything up");
			}
	else{
		printf("keyboard much");
	}


	return 0;
}
