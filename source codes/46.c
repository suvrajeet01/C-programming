#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{	
	//reading from a file
	FILE * fpointer;
	fpointer = fopen("bacon.txt", "r");	//r is used to read
	char singleLine[150];
	while(!feof(fpointer))		//feof stands for file end of file and the exclamation(!) sign denotes not so it will read out left to right ; the loop continues until the pointer reaches the end of the file
	{
		fgets(singleLine , 150 , fpointer);
		puts(singleLine);	//the new line after each line is due to puts that is responsile for printing out new line after each line
	}

	fclose(fpointer);

	return 0;
}