#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//generating random numbers with rand function present in math.h

	int i;
	int diceRoll;

	for (i = 0; i < 20; i++)
	{

		printf("%d\n", rand()  );		//generates a random number from 0 to 32767
	}

		for (i = 0; i < 20; i++)
	{
		diceRoll = ( rand()%6 ) + 1;
		printf("%d\n", diceRoll );		//generates a random number from 0 to 32767
	}


		return 0;
}