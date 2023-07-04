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

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s - n);
}
