#include "main.h"
#include <string.h>
/**
 * puts_half - Entry point
 *
 * Description: 'This program will reverse a string
 *
 * @str: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
void puts_half(char *str)
{
	int count = strlen(str) / 2;

	str = (count % 2 != 0) ?  str + count : str + count + 1;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
