#include "main.h"
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
