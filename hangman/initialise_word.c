#include "hangman.h"

/**
 * init_word - initialises the player's word to blanks
 * @guessword: pointer to pointer pointing to player's word to build
 * @len: length of the word picked at random
*/
char** init_word(char** guessword, int len)
{
 	int i;

	*guessword = malloc(len + 1);
	memset(*guessword, '_', len);
	(*guessword)[len] = '\0';

	return (guessword);
}
