#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int tuna = 'F' ;
	if ( isalpha(tuna) )
	{
		
		if ( isupper (tuna) )
		{
			printf("%c is an upper case letter\n", tuna );
		}else{
			printf("%c is an lowercase letter\n", tuna );
		}

	}else{

		if( isdigit (tuna)){
			printf("%c is a number\n", tuna );
		}else{
			printf("%c is a OMG WTF is that !?\n", tuna);
		}
	}


int tuna01 = 'f' ;
	if ( islower(tuna01) )
	{
		
		if ( isupper (tuna01) )
		{
			printf("%c is an upper case letter\n", tuna );
		}else{
			printf("%c is an lowercase letter\n", tuna );
		}

	}else{

		if( isdigit (tuna)){
			printf("%c is a number\n", tuna );
		}else{
			printf("%c is a OMG WTF is that !?\n", tuna);
		}
	}


	return 0;
}