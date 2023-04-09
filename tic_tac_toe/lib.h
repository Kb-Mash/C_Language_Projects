#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/** constants **/
#define ROWS 3
#define COLS 3

/** function prototypes **/
void initBoard(int board[][3]);
void printBoard(int board[][3]);
int getRow();
int getCol();
bool isValidMove(int board[][3], int row, int col);
void printInValid();
bool isAWin(int board[][3]);
void printWinner(int player);
bool isATie(int board[][3]);
void printTie();
void printGameOver();

#endif
