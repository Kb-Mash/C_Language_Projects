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

        if (!checkletter(guessword, letter, word, len))
        {
            tries++;
        }
        else
        {
            printf("\nIncorrect. You have guesses left\n");
            lettercorrect++;
        }
    } while (lettercorrect < len && tries < max_tries);

    if (lettercorrect == len)
    {
        printf("Congratulations!\n");
    }
    else
    {
        printf("\nGuessed wrong. The word was %s/n", word);
    }
}
