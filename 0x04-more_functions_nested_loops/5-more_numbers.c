#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: 'This program will print digits except from 0 to 14
 * 10 times
 *
 */
void more_numbers(void)
{
	int c = 0;
	int i;

	while (c < 10)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
		c = c + 1;
	}
}
