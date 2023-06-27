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
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
