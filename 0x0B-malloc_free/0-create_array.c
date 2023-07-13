#include "main.h"
/**
 * create_array - Entry point
 *
 * Description: 'This program will create array
 *
 * @size: Int to be tested
 * @c: Char to be tested
 *
 * Return: Char* (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (0);
	}

	while (size != 0)
	{
		arr[size] = c;
		size--;
	}

	return (arr);
}

