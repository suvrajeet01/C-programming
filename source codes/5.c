#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	//string terminator \o
char name[19]="Suvrajeet Banerjee";
printf("My name is %s \n",name);

name[9]='&';
printf("My name is %s \n",name);

char food[]="kalakand";
printf("My favourite food is %s\n",food);


strcpy(food, "barfi");
printf("My favourite food is %s\n",food);

	return 0;
}
