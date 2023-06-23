#include "main.h"
/**
 * print_square - Entry point
 *
 * Description: 'This program will print '*' for number of times
 *
 * @size: Integer to be size
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (j = 0 ; j < size ; j++)
	{
		for (i = 0 ; i < size ; i++)
		{
			_putchar('*');
		}
		_putchar('\n');
	}
}
