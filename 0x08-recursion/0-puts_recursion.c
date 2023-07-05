#include "main.h"
/**
 * _puts_recursion - Entry point
 *
 * Description: 'This program will print string using _putchar
 *
 * @s: Char* to be tested
 *
 * Return: Void (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else 
		_putchar('\n');
}
