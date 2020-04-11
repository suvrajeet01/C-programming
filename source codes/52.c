#include <stdio.h>
#include <stdlib.h>
int bonus(int yearsWorked);
int main()
{
	//return values and thier meaning
	int robertsBonus = bonus(14);
	int oliverBonus = bonus(4);
	printf("Robert gets %d \n", robertsBonus);
	printf("Oliver gets %d \n", oliverBonus);
	printf("\n");
	printf("Robert gets %d \n", bonus(14));
	printf("Oliver gets %d \n", bonus(4));

	return 0;
}

int bonus(int yearsWorked)
{
	int bonus = yearsWorked * 250;

	if(yearsWorked > 10)
	{
		bonus += 1000;
	}
	return bonus;
}