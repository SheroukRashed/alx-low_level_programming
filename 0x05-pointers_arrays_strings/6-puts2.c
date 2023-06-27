#include "main.h"
#include <string.h>
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
	int c = strlen(str) - 1;
	while (c >= 0)
	{
		_putchar(*str);
		str += 2;
		c -= 2;
	}

	_putchar('\n');
}
