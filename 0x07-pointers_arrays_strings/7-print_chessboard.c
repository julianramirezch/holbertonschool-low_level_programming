#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: string
 */

void print_chessboard(char (*a)[8])
{
	int columns;
	int rows;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
		_putchar('\n');
	}
}
