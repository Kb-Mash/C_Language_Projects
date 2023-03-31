#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - user has to guess a number generated randomly
 * that's between 1 and 100
 */

int main()
{
	int rand_n, max = 100, min = 1, i = 0;
	int user_n, guess_lmt = 5;

	srand(time(NULL));
	rand_n = (rand() % (max - min + 1)) + min;

	printf("Guess a number between 1 and 100. You have 5 guesses.\n");

	while (i < guess_lmt)
	{
		printf("Enter your number: ");
		scanf("%d", &user_n);

		if (user_n == rand_n)
		{
			printf("Yay! You guessed right!\n");
			break;
		}
		else if (user_n > rand_n)
		{
			printf("Your number is greater than mine.\n\n");
		}
		else
		{
			printf("Your number is smaller than mine.\n\n");
		}
		i++;
	}

	if ( i == guess_lmt)
	{
		printf("----------------------\n");
		printf("Out of guesses.\n%d was the number you were looking for.\n", rand_n);
	}
	return (0);
}
