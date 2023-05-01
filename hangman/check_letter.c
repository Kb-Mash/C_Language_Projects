#include "hangman.h"

/**
 * checkletter - checks if player's letter matches a letter in word
 * @letter: player's input
 * @word: random word
 * @len: length of random word
 * Return: true if there's a match, else false
*/
bool checkletter(char* guessword, char letter, char* word, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (word[i] == letter)
		{
			guessword[i] = letter;
			return (true);
		}
	}

	return (false);
}
