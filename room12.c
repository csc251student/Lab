#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>

#define SIDES 6
#define MagicNumber 10

void main(void)
{
	 int choice=0;
	 char name[30];
	 int input=0;
	 srand(time(NULL));

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
				int a=0;
				int b=(rand() % MagicNumber);;
					

				while(a!=b)
				{
				printf("Write a number between 0 and 9 exclusive\n");
				scanf("%d",&a);

				while(a<=0 && a>=11)
				{
				printf("Number is out of bounds\n");
				printf("Write a number between 0 and 11 exclusive\n");
				scanf("%d",&a);
				}

				if(a<b)
				{
				printf("Too low \n");
				}

				if(a>b)
				{
				printf("Too high \n");
				}

				if(a==b)
				{
				printf("Correct guess\n");
				}

			}
				
		}

			else if(input==2)
			{
				puts("Welcome to the word Modification Game");
				printf("Write a word and see its uppercase and lowercase\n");
				int i=0;
				scanf("%s",name);

				for(i=0; name[i]!='\0'; i++)
				{
				name[i]=toupper(name[i]);
				}

				printf("%s\n", name);
				for(i=0; name[i]!='\0'; i++)
				{
				name[i]=tolower(name[i]);
				}

				printf("%s\n", name);
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
