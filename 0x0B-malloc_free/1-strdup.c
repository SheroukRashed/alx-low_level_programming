#include "main.h"
/**
 * _strdup - Entry point
 *
 * Description: 'This program will copy string
 *
 * @str: Char* to be tested
 *
 * Return: Char* (Success)
 */
char *_strdup(char *str)
{
	int size = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
		size++;

	arr = malloc(size + 1);

	while (size--)
	{
		arr[size] = str[size];
	}

	return (arr);
}

