#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hoursStudied = 60; //10 or more
	int kidsBeatUp = 2; //0 kids

	if( (hoursStudied>=10) && (kidsBeatUp==0) ){
		printf("you are a good student\n");
	}
	if( (hoursStudied>=10) && (kidsBeatUp==2) ){
		printf("you are a good student\n");
	}

	return 0;
}
