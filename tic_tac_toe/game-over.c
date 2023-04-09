#include "lib.h"

/**
 * isAWin - checks for a win horizontally, vertically and diagonally
 * @board: the matrix representing the board
 * Return: true if there is a win,
 * else false
 */

bool isAWin(int board[][3])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		if ((board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
			(board[0][i] != 0 && board[0][i]== board[1][i] && board[1][i] == board[2][i]) ||
				(board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
				(board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]))
		{
			return (true);
		}
	}

	return (false);
}

/**
 * isATie - checks for a tie
 * @board: the matrix representing the board
 * Return: true if it's a tie, else false
 */
bool isATie(int board[][3])
{
	int row, col;
	//check for a tie
	bool isTie = true;
	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col < COLS; col++)
		{
			if (board[row][col] == 0)
			{
				isTie = false;
				break;
			}
		}
		if (!isTie)
		{
			break;
		}
	}
	if (isTie)
	{
		return (true);
	}

	return (false);
}

/**
 * printWinner - prints the winner of the game
 * @player: the current player of the game
 */
void printWinner(int player)
{
	printf("\n");
        printf("The winner is player %d\n", player);
}


/**
 * printTie - prints game over when there is a tie
 */
void printTie()
{
	printf("\n"),
	printf("It's a tie!\n");
}

/**
 * printGameOver - prints a message when the game is over
 */
void printGameOver()
{
	printf("GAME OVER!\n");
}
