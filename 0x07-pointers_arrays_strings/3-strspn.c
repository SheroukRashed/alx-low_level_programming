#include "main.h"
#include <stddef.h>
/**
 * _strspn - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @s: Char* to be tested
 * @accept: Char* to be tested
 *
 * Return: Char* (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	for (j = 0 ; s[j] != '\0' && s[j] != 32 ; j++)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (s[j] == accept[i])
				count++;
		}

	}

	return (count);
}
