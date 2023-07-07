#include "main.h"
/**
 * _puts - Entry point
 *
 * Description: 'This program will calculate string length
 *
 * @str: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
