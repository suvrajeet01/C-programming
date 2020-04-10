#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a = 'a';
	char b = 'F';
	char c = '7';

	printf("%c\n", toupper(a) );	//converts lowercase to uppercase 
	printf("%c\n", toupper(b) );	//leaves other things as it is
	printf("%c\n", toupper(c) );


	char ham[100] = "Hey";
	strcat(ham, "tuna");	//strcat means string concatenate i.e it means tag something onto the inner string
	strcat(ham, "tastes");
	strcat(ham, "good !"); //make sure to add only those many characters that the string or the variable can hold
	printf("%s\n",ham );
	

	strcpy(ham, "Tuna is awesome");		//replaces one string with another
	printf("%s\n",ham );




	return 0;
}