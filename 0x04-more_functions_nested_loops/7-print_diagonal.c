#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * Description: 'This program will print '\' for number of times
 *
 * @n: Integer to be size
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
