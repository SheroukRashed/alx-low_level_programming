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
	unsigned int i = 0;
	unsigned int j = 0;

	for (j = 0 ; needle[j] != '\0' ; j++)
	{
		for (i = 0 ; haystack[i] != '\0' ; i++)
		{		
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}

	}

	return (NULL);
}
