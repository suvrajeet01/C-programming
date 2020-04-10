#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
//rounding off numbers
//functions required are present in math.h
	float a1 = 9.65234;
	float a2 = 3.3;

	printf("a1 is %.2f\n", floor(a1) );	//floor rounds down to next/nearest whole nummber
	printf("a1 is %.2f\n", floor(a2) );

	printf("a1 is %.2f\n", ceil(a1) );	//ceil rounds up to next/neareset whole nummber
	printf("a1 is %.2f\n", ceil(a1) );

	return 0;
}