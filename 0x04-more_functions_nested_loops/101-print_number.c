#include "main.h"
/**
 * print_number - Entry point
 *
 * Description: 'This program will print digit
 *
 * @n: Integer to be n
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
