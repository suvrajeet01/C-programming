#include<stdio.h>
#include<stdlib.h>

void print();	//	prototyping a function

int main()
{
	//functions
	print();
	print();

	return 0;
}

//functions are created in this part
void print()	//void doesn't return anything
{
	printf("This is a user created function\n");
	return;
} 								