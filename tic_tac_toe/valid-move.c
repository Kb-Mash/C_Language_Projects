#include "lib.h"

/**
 * isValidMove - checks if chosen block is empty
 * Return: true if the block is empty, else false
 */

bool isValidMove(int board[][3], int row, int col)
{
	if (board[row][col] == 0)
	{
		return (true);
	}
	return (false);
}

/**
 * printInValid - prints message to tell players tthat their move is invalid
 */
void printInValid()
{
	printf("\n");
	printf("Block selected is not empty,\nplease select another block\n");
}
