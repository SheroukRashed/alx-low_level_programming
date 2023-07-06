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
#include "main.h"
/**
 * is_palindrome - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @s: char* to be tested
 *
 * Return: Integer (Success)
 */
int is_palindrome(char *s)
{
	return (_is_equal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _is_equal - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @s: Char* to be tested
 * @x: Int to be tested
 * @y: Int to be tested
 *
 * Return: Integer (Success)
 */
int _is_equal(char *s, int x, int y)
{
	if (s[x] != s[y])
		return (0);
	if (x == y || y == x + 1)
		return (1);
	return (_is_equal(s, x + 1, y - 1));
}
