#include "main.h"
#include <string.h>
/**
 * _strcpy - Entry point
 *
 * Description: 'This program will reverse a string
 *
 * @dest: Pointer to char to be tested
 * @src: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int c = strlen(src) - 1;
	int i = 0;
	while ( i <= c )
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
