#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//pointers
	int tuna = 19;
	printf("%p \n", &tuna);

	int tuna1 = 19;
	printf("Address \t Name \t Value \n");
	printf("%p \t %s \t %d \n", &tuna1,"tuna1",tuna1);

	//pointers are special variables that stores addresses
	int * ptuna1 = &tuna1;
	printf("%p \t %s \t %d \n", ptuna1,"tuna1",tuna1);
	printf("%p \t %s \t %d \n", &ptuna1,"tuna1",tuna1);

	return 0;
}