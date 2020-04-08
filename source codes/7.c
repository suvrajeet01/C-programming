#include<stdio.h>

int main()
{
	//taking input from user
	
	char name[40];
	char car[40];
	int price;

	printf("Enter name:");
	scanf("%s",name);

	printf("\nEnter Car:");
	scanf("%s",car);	
	
	printf("\nEnter price:");
	scanf("%d",&price);

	printf("%s owns a %s worth %dcr ",name,car,price);




	return 0;
}
