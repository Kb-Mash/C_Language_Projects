#include "lib.h"

/**
 * initBoard - initialises the board to empty blocks
 */

void initBoard(int board[][3])
{
	int row, col;

	printf("\nTIC TAC TOE\n");
	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col < COLS; col++)
		{
			board[row][col] = 0;
		}
	}
}
