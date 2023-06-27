#include "main.h"
/**
 * puts2 - Entry point
 *
 * Description: 'This program will calculate string length
 *
 * @str: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
