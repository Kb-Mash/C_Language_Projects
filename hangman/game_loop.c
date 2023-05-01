#include "hangman.h"

/**
 * hangman - gets input from user and checks if it matches the random word
 * @word: random word
 * @guessword: user's characters
 * @len: length of random word
*/
void hangman(char* word, char* guessword, int len)
{
    char letter;
    int i, lettercorrect = 0, tries = 0, max_tries = 6;

    do
    {
        printword(guessword);
        printf("\nGuess Letter: ");
        scanf("%c", &letter);
	getchar();

        if (checkletter(guessword, letter, word, len))
        {
		lettercorrect++;

        }
        else
        {
            printf("\nIncorrect. You have %d guesses left\n", max_tries - tries - 1);
            tries++;
        }
    } while (lettercorrect < len && tries < max_tries);

    if (lettercorrect == len)
    {
	printword(guessword);
        printf("\nCongratulations!\n");
    }
    else
    {
        printf("\nGuessed wrong. The word was %s\n", word);
    }
}
