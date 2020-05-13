#include<stdio.h>
#include<stdlib.h>
void print();
int tuna = 6 ; //global variable i.e not contained within or inside a function nad can be used by any function


int main()
{
	//global and local variables
	printf("I ate %d tuna today\n", tuna);
	int tuna1 = 7;	//local variable i.e. contained inside a function 	and only this function can use it
	print();
	printf("I ate %d tuna today\n", tuna1);
	return 0;
}
void print()	//void doesn't return anything
{
	printf("This is a user created function\n");
	printf("I ate %d tuna today\n", tuna);
	return;
}