#include "hangman.h"

void init_Hang()
{
	printf("\n");
	printf("\t\t\t    ____\n");
	printf("\t\t\t    |\n");
	printf("\t\t\t    |\n");
	printf("\t\t\t    |\n");
	printf("\t\t\t    |\n");
	printf("\t\t\t    |\n");
	printf("\t\t\t    |\n");
	printf("\t\t\t  _____\n");
}

void printHang(int tries)
{
	if (tries == 0)
	{
		printf("\n");
		printf("\t\t\t    ____\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t  _____\n");
	}
	else if (tries == 1)
	{	
		printf("\n");
		printf("\t\t\t    ____\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |  O\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t  _____\n");
	}
	else if (tries == 2)
	{
		printf("\n");
		printf("\t\t\t    ____\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |  O\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t  _____\n");
	}
	else if (tries == 3)
	{
		printf("\n");
		printf("\t\t\t    ____\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |  O\n");
		printf("\t\t\t    | \\|/\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t  _____\n");
	}
	else if (tries == 4)
	{
		printf("\n");
		printf("\t\t\t    ____\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |  O \n");
		printf("\t\t\t    | \\|/\n");
		printf("\t\t\t    |  | \n");
		printf("\t\t\t    | /\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t  _____\n");
	}
	else
	{
		printf("\n");
		printf("\t\t\t    ____\n");
		printf("\t\t\t    |  |\n");
		printf("\t\t\t    |  O \n");
		printf("\t\t\t    | \\|/\n");
		printf("\t\t\t    |  | \n");
		printf("\t\t\t    | / \\\n");
		printf("\t\t\t    |\n");
		printf("\t\t\t  _____\n");
	}
}
