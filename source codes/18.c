#include<stdio.h>

int main()
{
	//increment operator-efficeint way to add or subtract 1 from a variable

	int x = 20;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

	x--;
	printf("%d\n", x);

	int a = 5, b = 10, answer = 0;
	answer = ++a * b;			//pre increment changes the value before execution
	printf("Answer:%d\n", answer);

a = 5, b = 10, answer = 0;
	answer = a++ * b;			//post increment changes the value after execution
	printf("Answer:%d\n", answer);


	return 0;
}
