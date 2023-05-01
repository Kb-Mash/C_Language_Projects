#include "hangman.h"

/**
 * printword - prints characters guessed correct
 * @guessword: pointer to char pointer
 * @word: word picked at random
 * @len: length of word
*/
void printword(char* guessword)
{
    int i;

    while (guessword[i] != '\0')
    {
        printf("%c", guessword[i]);
        i++;
    }
    printf("\n");
}