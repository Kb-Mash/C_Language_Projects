#include "lib.h"

/**
 * printBoard - prints the board
 * @board: the matrix representing the board for the game
 */

void printBoard(int board[][3])
{
	int row, col;

	printf("\n");

	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col < COLS; col++)
		{
			if (board[row][col] == 0)
			{
				printf(" - ");
			}

			else if (board[row][col] == 1)
			{
				printf(" X ");
			}

			else if (board[row][col] == 2)
			{
				printf(" O ");
			}
		}
		printf("\n");
	}

	printf("\n");
}
