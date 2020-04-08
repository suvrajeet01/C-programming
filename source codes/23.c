#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
	//break keyword - helps to end a loop early
	
	int a,howMany,max=10;

	printf("how many times do you want this loop to run? (upto 10) ");
	scanf("%d", &howMany);
	for(a=1;a<=max;a++)
	{
		printf("%d \n", a);	
		if(a==howMany)
		{
			break;
		}
		
	}
	
	


	return 0;
}
