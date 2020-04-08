#include<stdio.h>

int main()
{

	//while loops
	

	int x = 1;
	while (x < 5){
	printf("value of x is now%d \n", x);
       	x++;	
	}





	int day = 1;
	float amount = .01;

	while(day<=31){
		printf("Day:%d \t Amount:$%.2f \n", day, amount);
		amount *= 2;
		day++;
	
	
	}






	return 0;
}
