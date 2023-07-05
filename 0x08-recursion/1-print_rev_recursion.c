#include "main.h"
/**
 * _print_rev_recursion - Entry point
 *
 * Description: 'This program will print string using _putchar
 *
 * @s: Char* to be tested
 *
 * Return: Void (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
