#include "main.h"
#include <ctype.h>
/**
 * print_sign - Entry point
 *
 * Description: 'This program will print alphabet'
 * @n: int n
 *
 * Return: Int (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
