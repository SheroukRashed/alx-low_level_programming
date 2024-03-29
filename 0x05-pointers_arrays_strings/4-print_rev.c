#include "main.h"
#include <string.h>
/**
 * print_rev - Entry point
 *
 * Description: 'This program will calculate string length
 *
 * @s: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
void print_rev(char *s)
{
	int count = strlen(s) - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}

	_putchar('\n');
}
