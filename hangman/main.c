#include "hangman.h"

/**
 * main - hangman game
 * Return: 0 (success)
*/
int main()
{
	char *words[] = {"pointer", "function", "loop", "python",
		"pseudocode", "malloc", "enums", "union", "cybersecurity", "process"};
	int size = sizeof(words) / sizeof(words[0]);
	char *word = NULL, *guessword = NULL;
	int len;

	randomword(&word, words, size);
	len = strlen(word);
	init_word(&guessword, len);
	hangman(word, guessword, len);

	free(word);
	free(guessword);
	return (0);
}
