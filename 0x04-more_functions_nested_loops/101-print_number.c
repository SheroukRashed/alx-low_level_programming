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
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
