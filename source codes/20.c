#include<stdio.h>

int main()
{
	
	//do while loop
	
	float grade = 0;
	float score = 0;
	float tests = 0;
	float average = 0;

	printf("Press 0 when complete \n\n");

	do{
		printf("Tests :%.0f  Average :%.2f \n", tests, average );
		printf("\n Enter test score: ");
		scanf("%f", &score);
		grade +=score;
		tests++;
		average = grade/tests;
	}
	while(score != 0);


	return 0;
}
