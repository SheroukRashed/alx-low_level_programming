#include "main.h"
/**
 * _strcmp - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @s1: Char* to be tested
 * @s2: Char* to be tested
 *
 * Return: Integer (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			equal = (*s1 - '0') - (*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}

	return (equal);
}
