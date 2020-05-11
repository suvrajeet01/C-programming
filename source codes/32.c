#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//absoulute value with abs
	int year1;
	int year2;
	int age;

	printf("Enter a year\n");
	scanf("%d", &year1);

	printf("Enter another year\n");
	scanf("%d", &year2);

	age = year1 -year2;
	printf("%d\n", age);
	age = abs(age);
	printf("%d\n", age);

	printf ("%f \n",pow(5,3) );		//function for printing out power of 5 raised to 3 i.e 5^3
	printf ("%f \n",sqrt(652) );	//function to print out square root of a number

	return 0;
}