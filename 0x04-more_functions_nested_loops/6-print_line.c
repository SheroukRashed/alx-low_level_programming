#include "main.h"
/**
 * print_line - Entry point
 *
 * Description: 'This program will print '-' for number of times
 *
 * @n: Integer to be size
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	else if (n < 0)
	{
		for (i = n ; i < 0 ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
