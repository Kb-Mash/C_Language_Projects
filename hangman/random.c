#include "hangman.h"

/**
 * randomword - returns a word picked at random
 * @words: list of words
 * @size: size of the list of words
 * Return: a word picked at random 
*/
char* randomword(char* words[], int size)
{
    int i = rand() % size;
    return (words[i]);
}
