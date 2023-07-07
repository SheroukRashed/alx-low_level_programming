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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
