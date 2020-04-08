#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	//continue keyword - ignores the rest of the code thats inside a loop but don't completely break it i.e it goes to the top or start of the loop and starts another cycle
	//used to skip certain parts......
	//continue = go back to the top without executing the lines below continue
	//does not completely breaks the loop but instead skips certains parts of it
	
	int num =1;

	do
	{
		if(num ==6 || num == 8)
		{
			num++;
			continue;
		}
		printf("%d is available \n", num);
		num++;
	}while(num<=10);



	return 0;
}
