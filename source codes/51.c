#include <stdio.h>
#include <stdlib.h>
void euro-dollar(float euro);
int main()
{
	//passing arguments to function

	float euroPrice1 = 1.00;
	float euroPrice2 = 1.00;

	euro-dollar(euroPrice1);
	euro-dollar(euroPrice2);
	euro-dollar(21.30);
	return 0;
}

void euro-dollar(float euro)
{
	float usd = euro * 1.37;
	printf("%.2f Euros - %.2f USD\n", euro, usd);
	return;
}