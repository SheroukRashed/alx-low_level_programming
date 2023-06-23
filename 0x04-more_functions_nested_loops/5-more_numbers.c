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
	char zero = '0';
	char whole;
	char rem;

	while (c < 10)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			rem = '*';
			if (i <= 9)
			{
				whole = zero + i;
			}
			else
			{
				whole = zero + (i / 10);
				rem = zero + (i % 10);
			}
			_putchar(whole);
			if (rem != '*')
				_putchar(rem);
		}
		_putchar('\n');
		c = c + 1;
	}
}
