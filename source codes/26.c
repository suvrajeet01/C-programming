#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{	
	//uses of ctype header file
	//isalpha and isdigit are functions in ctype header files that alows to use int variables as char and vice versa respectively.....
	

	int a = 'Q',b = '8',c = '$' ;					//using the technique of charachter assignment for assigning integer value to the variable
	if(isalpha(a))
	{
		printf("%c is a letter \n " , a);		//using int variable to store char and also the format specifier is of characater


	}
		if(isdigit(b)){
			printf("%c is a digit\n ", b);
							//using int variable to store number but using format specifier of character
	}
		printf("%c is a OMG WTF is that!\n", c);	//using character as format specifier for strings
	



	int tuna = '$';
	if( isalpha(tuna) )
	{
		printf("%c is a letter\n", tuna);
	}else{

		if( isdigit(tuna)  ){

			printf("%c is a number", tuna);
		
		}else{
				printf("%c is a OMG WTF is that!\n", tuna);
			
		}
	
	}

	
	int choice;
	printf("Enter your choice (Q/8/$) :");
	scanf("\n%c",&choice);
	if( isalpha(choice) )
	{
		printf("%c is a letter\n", choice);
	}else{

		if( isdigit(tuna)  ){

			printf("%c is a number", choice);
		
		}else{
				printf("%c is a OMG WTF is that!\n", choice);
			
		}	
	}



	return 0;
}
