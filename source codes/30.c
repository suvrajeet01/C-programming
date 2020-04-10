#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{

								//puts and gets functions
								// function reads out spaces i.e the problem with scanf function is replaced by  function
								//whenever a string is scanned with a space the program breaks and the part after space is not read.
	char catsName[50];
	char catsFood[25];
	char sentence[75] = "";

	puts("Whats the cats name ? ");	//acts like printf ; doesn't need a \n i.e. it automatically adds a new line
	gets(catsName);								//acts like scnaf

	puts("What does he eat?");
	gets(catsFood);
	strcat(sentence , catsName);
	strcat(sentence, " loves to eat ");
	strcat(sentence,catsFood);

	puts(sentence);

	return 0;
}