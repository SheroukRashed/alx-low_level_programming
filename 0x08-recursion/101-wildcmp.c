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
 * wildcmp - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @s1: char* to be tested
 * @s2: char* to be tested
 *
 * Return: Integer (Success)
 */
int wildcmp(char *s1, char *s2)
{
	if (_strlen_recursion(s1) != _strlen_recursion(s2))
		return (0);
	return (_is_wildcmp(s1, s2, _strlen_recursion(s1) - 1));
}

/**
 * _is_wildcmp - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @s1: Char* to be tested
 * @s2: Char* to be tested
 * @n: Int to be tested
 *
 * Return: Integer (Success)
 */
int _is_wildcmp(char *s1, char *s2, int n)
{
	if (s1[n] != s2[n])
		return (0);
	if (n == 0)
		return (1);
	if (s1[n] == '*' || s2[n] == '*')
	return (_is_wildcmp(s1, s2, n - 1));
}
