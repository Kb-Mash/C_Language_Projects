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

    printf("\nWelcome To Hangman\nThe list of words are of computer programming subject");
    init_Hang();

    do
    {
        printword(guessword);
        printf("\nGuess Letter: ");
        scanf("%c", &letter);
	getchar();

        if (checkletter(guessword, letter, word, len))
        {
		for (i = 0; i < len; i++)
		{
			if (word[i] == letter)
			{
				guessword[i] = letter;
				lettercorrect++;
			}
		}

        }
        else
        {
            printHang(tries);
            tries++;
        }
    } while (lettercorrect < len && tries < max_tries);

    if (lettercorrect == len)
    {
	printword(guessword);
        printf("\nCongratulations! You guessed right!\n");
    }
    else
    {
        printf("\nSorry! You guessed wrong. The word was %s\n", word);
    }
}
