#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'This program will print alphabet
 *
 * Return: Void (Success)
 */
void print_alphabet_x10(void)
{
	int x = 1;
	int c;

	while (x <= 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		x++;
	}
}
