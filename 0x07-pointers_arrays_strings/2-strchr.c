#include "main.h"
#include <stddef.h>
/**
 * _strchr - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @s: Char* to be tested
 * @c: Char* to be tested
 *
 * Return: Char* (Success)
 */
char *_strchr(char *s, char c)
{
	int i;
	
	if (c == '\0')
		return (s);

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
