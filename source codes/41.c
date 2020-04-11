#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//problems with string length
	char movie [20];
	char *pMovie = movie;

	//fgets takes input from the user  and if theey enter more than a certain amount it just cuts it offf or omits it
	//stdin is standard input
	fgets(pMovie , 20 , stdin);
	puts(pMovie);

	//whenever user is asked to enter title or something like this it has to use fgets function
	return 0;
}