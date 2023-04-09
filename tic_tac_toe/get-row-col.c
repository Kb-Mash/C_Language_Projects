#include "lib.h"

/**
 * getRow - player chooses the row to play
 * Return: the chosen row
 */
int getRow()
{
	int row;

	do
	{
		printf("Enter row: ");
		scanf("%d", &row);
	}
	while (row < 1 || row > 3);

	return  (row - 1);
}


/**
 * getCol - player chooses the column to play
 * Return: the chosen column
 */
int getCol()
{
	int col;

	do
	{
		printf("Enter column: ");
		scanf("%d", &col);
	}
	while (col < 1 || col > 3);

	return (col - 1);
}
