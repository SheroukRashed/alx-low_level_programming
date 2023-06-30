#include "main.h"
/**
 * _strncat - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @dest: Char* to be tested
 * @src: Char* to be tested
 * @n: Integer limit
 *
 * Return: Char* (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int total = n <= _strlen(src) ?
		_strlen(dest) + n : _strlen(dest) + _strlen(src);

	while (*dest != '\0')
	{
		dest++;
	}

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
