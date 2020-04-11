#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{	
	//writing files in c
	//files stores data created by program
	//2 types of file types
		//sequential - data is in order
		//random - data in random manner

	FILE * fpointer;
	//w for writing to the file
	//r for reading from the file
	//a is used for append or add

	fpointer = fopen("bacon.txt", "w");			//w overwrites the data that was previously stored
	fprintf(fpointer,"I Love cheese\n");
	fprintf(fpointer,"bacon is good\n");
	fclose(fpointer);

	return 0;
}