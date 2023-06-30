#include "main.h"
/**
 * _strncpy - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @dest: Char* to be tested
 * @src: Char* to be tested
 * @n: Integer limit
 *
 * Return: Char* (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int total = n <= _strlen(src) ? n : _strlen(src);

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest - total);
}

/**
 * _strlen - Entry point
 *
 * Description: 'This program will calculate string length
 *
 * @s: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
