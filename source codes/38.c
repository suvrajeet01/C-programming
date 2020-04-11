#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//Dereference pointers
	int tuna = 19;
	int * ptuna = &tuna;

	printf("%p \n", &tuna);
	printf("%p \t %s \t %d \n", ptuna,"tuna",tuna);
	printf("%p \t %s \t %d \n", &ptuna,"tuna",tuna);

	//dereferencing a pointer i.e accessing a pointer through or from a pointer by having the same valve for both the pointer variable as well as the variable
	//dereferencing refers to getting the value of a variable using pointers
	printf("\n*ptuna: %d \n", *ptuna);

	*ptuna = 71;
	printf("\n*ptuna : %d \n", *ptuna);
	printf("\n*tuna : %d \n", tuna);

	return 0;
}