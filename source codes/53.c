#include<stdio.h>
#include<stdlib.h>
void passByValue(int i);
void passByAddress(int *i);

int main()
{
	//pass by refrence or address and pass by value

	int tuna = 20;
	passByValue(tuna);
	printf("Passing by value, tuna is now %d\n", tuna);

	passByAddress(&tuna)
	printf("Passing by address, tuna is now %d\n", tuna);


	return 0;
}
void passByValue(int i)
{
	i=99;
	return;
}
void passByAddress(int *i)
{
	*i = 64;
	return;
}