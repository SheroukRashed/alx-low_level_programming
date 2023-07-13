#include "main.h"
/**
 * str_concat - Entry point
 *
 * Description: 'This program will concate 2 strings
 *
 * @s1: Char* to be tested
 * @s2: Char* to be tested
 *
 * Return: Char* (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int tot = size1 + size2;
	int i = 0;
	char *str;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	str = malloc(tot + 1);

	if (str == 0)
	{
		return (0);
	}

	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}

	while (i < tot)
	{
		str[i] = s2[i - (size1)];
		i++;
	}

	return (str);
}

