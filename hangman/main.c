#include "hangman.h"

/**
 * main - hangman game
 * Return: 0 (success)
*/
int main()
{
	char *words[] = {"hello", "hopeful", "python", "danger", "welcome", "input", "delusional", "occassion", "movies", "ticket"};
	int size = sizeof(words) / sizeof(words[0]);
	char *word = randomword(words, size);
	char *guessword = NULL;
	int len = strlen(word);

	init_word(&guessword, len);
	hangman(word, guessword, len);

	free(guessword);
	return (0);
}
