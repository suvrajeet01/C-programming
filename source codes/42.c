#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	//Heaps
	//for using more memory than allocated to variables
	//heaps are extra unused or free memory that can be borrowed, used and then returned when it's work is completed
	int * points;
	points = (int *) malloc(5 * sizeof(int));
	free(points);

	//free shows the amount of space occupied by the variable and data type
	return 0;
}