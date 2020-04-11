#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//strings and pointers
	char movie[] = "Iron Man";
	char *movie2 = "Iron Man 2";

	puts(movie2);
	movie2 = "Iron Man 3";
	puts(movie2);
	

	return 0;
}