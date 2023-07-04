#include "main.h"
#include <stddef.h>
/**
 * print_chessboard - Entry point
 *
 * Description: 'This program will print chessboard
 *
 * @a: Char* to be tested
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (j = 0 ; j < 8 ; j++)
	{
		for (i = 0 ; i < 8 ; i++)
		{
			_putchar(a[i][j]);
		}

	}

	_putchar('\n');
}
