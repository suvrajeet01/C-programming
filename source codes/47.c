#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{	
	FILE * fpointer;
	fpointer = fopen("bacon.txt", "a");			//sequential access files i.e append ; a for append

	fprintf(fpointer, "\n-a art by sjbbl");		//appends adds the text just after the last line of the file

	fclose(fpointer);
	
	return 0;
}