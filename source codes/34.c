#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//int and float arrays

	int i;
	int meatBalls[4] = {7,9,43,21};		//int and float arrays are different than character arrays as they dont have the null character at the end i.e they don't have the null 0
										//there is no null character for int and float arrays unlike string and character arrays
	for (i = 0; i < 4 ; i ++)
	{
		printf("Element %d : %d \n", i, meatBalls);
	}

	int i1;
	int meatBalls1[5];
	int totalBalls = 0;
	for (i1 = 0; i < 5; i++)
	{
		printf("How many meatballs did you eat on day %d?" , i+1);
		scanf("%d", &meatBalls1[i1]);
	}

	for (i1 = 0; i < 5; i++)
	{	totalBalls+=meatBalls1[i1];
		printf("How many meatballs did you eat on day %d?" , i+1);
		scanf("%d", &meatBalls1[i1]);
	}

	int avg = totalBalls/5;
	printf("\n You ate %d meatBalls total, thats an average of %d per day! \n" ,totalBalls, avg);
			return 0;
}