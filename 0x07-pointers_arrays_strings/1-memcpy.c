#include "main.h"
/**
 * _memcpy - Entry point
 *
 * Description: 'This program will concat 2 strings
 *
 * @dest: Char* to be tested
 * @src: Char* to be tested
 * @n: Unsigined int
 * Return: Char* (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for ( i = 0 ; i < n ; i++)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
