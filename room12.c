#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void main(void)
{
	 int choice=0;
	 int input=0;
	 puts("Welcome this is room 12");
	 puts("What would you like to do: \n1. Leave Room 12\n2.Stay");
	 scanf("%d",&choice);
	 if(choice==1)
	 {
	 puts("Thank You Come Again");	
	 }
	 
	 if(choice==2)
	 {
	 	while(input!=5)
	 	{
	 		puts("Let's play some games");
			puts("Choose a game");
			printf("Games:\n1. Guess the number\n2. Word Modification\n3. Guess the word\n4. Roll a dice\n5. Leave Room 12\n");
			scanf("%d",&input);

			if(input==1)
			{
				puts("Welcome to Guess the Number Game");
			}

			else if(input==2)
			{
				puts("Welcome to the word Modification Game");
			}

			else if(input==3)
			{
				puts("Welcome to Guess the word Game");
			}

			else if(input==4)
			{
				puts("Welcome to Roll the Dice Game");
			}

			else if(input==5)
			{
				puts("Thank You Come Again");
			}
		 }
	}
}
