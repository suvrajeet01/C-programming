#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "structure.h"

int main()
{
	struct user robert;
	struct user oliver;

	robert.userID = 1;
	oliver.userID = 2;
//. or dot operator is used to access individual elements/items inside a structure
	puts("Enter the first name of user1");
	gets(robert.firstname);
	puts("Enter the first name of user1");
	gets(oliver.firstname);

	printf("User 1 id is %d\n", robert.userID);
	printf("User 2 first name is %s\n", oliver.firstname);

	return 0;
}