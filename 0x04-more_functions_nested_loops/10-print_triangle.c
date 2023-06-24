#include "main.h"
/**
 * print_triangle - Entry point
 *
 * Description: 'This program will print '#' for number of times
 *
 * @size: Integer to be size
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (j = 1 ; j <= size ; j++)
	{
		for (i = 1 ; i <= size  ; i++)
		{
			if (i > (size - j))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
