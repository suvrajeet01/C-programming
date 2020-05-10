#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int tuna = 'b' ;
	if ( isalpha(tuna) )
	{
		printf("%c is a letter\n", tuna );
	}



	int tuna1 = '8' ;
	if ( isalpha(tuna1) )
	{
		printf("%c is a letter\n", tuna1 );
	}else{

		if( isdigit (tuna1)){
			printf("%c is a number\n", tuna1 );
		}
	}



	int tuna2 = '$' ;
	if ( isalpha(tuna2) )
	{
		printf("%c is a letter\n", tuna2 );
	}else{

		if( isdigit (tuna2)){
			printf("%c is a number\n", tuna2 );
		}else{
			printf("%c is a OMG WTF is that !?\n", tuna2);
		}
	}

	return 0;
}
