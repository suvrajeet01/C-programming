#include<stdio.h>

//single line comment
/*
multiple
line comments
comments are igored by compiler and only for those who take the pain to look at the
source code
*/

int main()
{
	//conversion characters
	/*
	  %s - placeholder for a string or texts
	  %d - placeholder for a number without a decimal
	  %f - placeholder for numbers with decimal places also called as float

	  //only string go under quotation
	*/

	printf("%s is the best thing ever %s","Programming","you could do in your free time");
	printf("\nI ate %d fruits today @ %s",2,"breakfast");
	printf("\nA general number is %f",84379.54758495793457935);
	printf("\nValue of pi is %f",3.142857142857143);
	printf("\nValue of pi is %.2f",3.142857142857143);
	printf("\nValue of pi is %.8f",3.142857142857143);

	return 0;
}