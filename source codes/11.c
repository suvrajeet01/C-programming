#include<stdio.h>

int main()
{
	//typecasting=temporarily changing data type of a variable

	float avpr;
	int pricepum=10;
	int sales=59;
	int daysworked=7;

	avpr=((float)pricepum*(float)sales)/(float)daysworked;

	printf("average daily profit : $%.2f",avpr);
	return 0;
}
