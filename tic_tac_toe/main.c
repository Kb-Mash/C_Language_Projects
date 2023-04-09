#include "lib.h"

/**
 * main - entry point
 */
int main()
{
	int board[ROWS][COLS];
	int player = 1;
	bool gameOver = false;

	initBoard(board);

	while (!gameOver)
	{
		printBoard(board);

		int row = getRow();
		int col = getCol();

		if (!isValidMove(board, row, col))
		{
			printInValid();
			continue;
		}


		board[row][col] = player;

		if (isAWin(board))
		{
			gameOver = true;
			printWinner(player);
			break;
		}

		if (isATie(board))
		{
			gameOver = true;
			printTie();
			break;
		}

		player = (player == 1) ? 2 : 1;
	}
	printBoard(board);
	printGameOver();

	return (0);
}
