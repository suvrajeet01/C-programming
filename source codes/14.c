#include<stdio.h>

int main()
{

	//else-if statement
	//for more than two choices

	float grade1;
	float grade2;
	float grade3;
	printf("enter your three test grades: \n");
	scanf("%f",&grade1);
	scanf("%f",&grade2);
	scanf("%f",&grade3);

	float avg=(grade1+grade2+grade3)/3;


	printf("average:%.2f \n",avg);



	if (avg >= 90){
		printf("Grade:A");
	}else if (avg >= 80){
		printf("Grade:B");
	}else if (avg >= 70){
		printf("Grade:C");
	}else if (avg >= 60){
		printf("Grade:D");
	}else{
		printf("Grade:F");
	}

	return 0;
}
