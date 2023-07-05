#include "main.h"
#include <stddef.h>
/**
 * _strstr - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @haystack: Char* to be tested
 * @needle: Char* to be tested
 *
 * Return: Char* (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}

	if (*needle == '\0')
		return (haystack);

	return (NULL);
}

/**
 * compare - Entry point
 *
 * Description: 'This program will compare 2 strings
 *
 * @str1: Char* to be tested
 * @str2: Char* to be tested
 *
 * Return: Integer (Success)
 */
int compare(char *str1, char *str2)
{
	while (*str2 != '\0')
	{
		if (*str1 == '\0' || *str1 != *str2)
			return (0);
		str1++;
		str2++;
	}
	return (1);
}
