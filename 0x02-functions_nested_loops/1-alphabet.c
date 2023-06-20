#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: 'This program will print alphabet
 *
 * Return: Void (Success)
 */
void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
