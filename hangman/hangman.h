#ifndef HANGMAN_H
#define HANGMAN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

/* function prototypes */
char* randomword(char* words[], int size);
void init_word(char* guessword, int len);
bool checkletter(char* guessword, char letter, char* word, int len);
void hangman(char* word, char* guessword, int len);
void printword(char* guessword);

#endif
