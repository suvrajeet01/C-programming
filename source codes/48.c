#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{	
	//random file access
	FILE * fpointer;
	fpointer = fopen("bacon.txt", "w+");	//here w is for write and + is for read
	fputs("I ate 3 chocopies today",fpointer);

	fseek(fpointer, 7 ,SEEK_SET);	//using fseek you can hop to any part of the file and wite to it unlike the initial and final position
									//SEEK_SET tells the pointer to start at the begining and the parameter just before it tells it how many characters or spaces do you want it to move
	fputs(" chocolates on Friday",fpointer);
	fseek(fpointer, -6 ,SEEK_END);	//SEEK_END starts the pointer from the end of the file and takes a neagative parameter instead of positive just before it
	fputs(" top of a mountain",fpointer);
	
	fclose(fpointer);

	return 0;
}