#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("This is a guessing Game.\nI have chossen a number between 0 and 20 which you must guess.\n");
	int random_n, count=1,guess;
	time_t t;
	srand((unsigned) time(&t));
	random_n = rand() % 21;


	for (count; count < 6; ++count)
	{
		printf("You Have %d tr%s left.\n", 6-count, count ==5 ? "y" : "ies");
		printf("Enter a guess: ");
		scanf("%d", &guess);
		if (guess==random_n)
		{
			printf("Congratulations. You guessed it!\n");
			return 0;
		} 
		else if (guess <0 || guess > 20)
		{
			printf("I said the number is between 0 and 20.\n");
			count = count - 1;
		}
	    else if(guess > random_n)
		{
			printf("Sorry, %d is wrong. My number is less than that.\n", guess);
		}
		else 
		{
			printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
		}
	}
	printf("You have had five tries and failed. The number was %d\n",random_n );

	return 0;
}