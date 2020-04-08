#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

//creating tables using nested for loops


int main()
{
	int rows;
	int columns;

	for (rows=1;rows<=6;rows++)
	{
		for(columns=1;columns<=4;columns++)
		{
			printf(" %d ",columns);
		}
		printf(" \n");
	}

	return 0;
}
