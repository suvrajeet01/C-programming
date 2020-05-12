#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i;
	int player[5] = {58,66,68,71,87};
	int goals [5] = {26,39,25,29,31};
	int gamesPlayed[5] = {30,30,28,30,26};

	float ppg[5];
	float bestPPG= 0.0;
	int bestPlayer;
		for(i=0; i<5; i++)
		{
			ppg[i] = (float)goals[i] / (float)gamesPlayed[i];	//typecasting
			printf("%d \t %d \t %d \t %.2f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

			if( ppg[i] > bestPPG )
			{
				bestPPG = ppg[i];
				bestPlayer = player[i];
			}

		}

printf("\n The best player is %d \n", bestPlayer);
return 0;

}