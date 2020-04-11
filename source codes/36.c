#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//sorting arrays i.e arranging elements from lowest to highest or vice-versa
	//in c there is no such built in function to carry out tasks such as sorting

	//bubble sort

	int i, temp, swap;
	int howMany =10;
	int goals[howMany];

	//create arrays
	for (i = 0; i < howMany; i++)
	{
		goals[i] = ( rand()%25 )+1;
	}

	printf("Original List\n");
	for (i = 0; i < howMany; i++)
	{
		printf("%d \n", goals[i]);
	}

	while(1){

		swap = 0;

			for (i = 0; i < howMany-1; i++)
			{

				if(goals[i]>goals[i+1])
				{
					int temp = goals[i];
					goals[i] = goals[i+1];
					goals[i+1] = temp;
					swap =1;

				}

			}
			if(swap==0)
			{
				break;
			}
	}

	printf("\nSorted List\n");
	for (i = 0; i < howMany; i++)
	{
		printf("%d\n", goals[i]);
	}
	return 0;
}