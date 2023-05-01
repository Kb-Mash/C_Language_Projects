#include "hangman.h"

/**
 * init_word - initialises the player's word to blanks
 * @guessword: pointer to pointer pointing to player's word to build
 * @len: length of the word picked at random
*/
void init_word(char* guessword, int len)
{
    int i;
    memset(guessword, '_', len);
    guessword[len] = '\0';
    /*for (i = 0; i < len; i++)
    {
    	guessword[i] = '_';
    }
    guessword[len] = '\0';
    */
}
