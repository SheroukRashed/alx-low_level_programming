#include "main.h"
/**
 * _strlen_recursion - Entry point
 *
 * Description: 'This program will print string using _putchar
 *
 * @s: Char* to be tested
 *
 * Return: Integer (Success)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1) + 1;
		return (n);
	}
	else
		return (0);
}
