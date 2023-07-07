#include "main.h"
/**
 * _memset - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @s: Char* to be tested
 * @b: Char to be tested
 * @n: Unsigined int
 * Return: Char* (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
