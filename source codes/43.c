#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{	
	//creating expandable application utilizing heap


	int i, howMany;
	int total;
	float avg = 0.0;
	int * pointsArray;

	printf("How many numbers do you want to average?\n");
	scanf("%d", &howMany);

	pointsArray = (int*) malloc(howMany * sizeof(int));

	printf("Enter the numbers !\n");
	for (i = 0; i < howMany; i++)
	{
		scanf("%d",&pointsArray[i]);
		total += pointsArray[i];
	}
	average = (float)total / (float)howMany;
	printf("Average is %f\n", average);
		return 0;
}