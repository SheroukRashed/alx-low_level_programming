#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - iterates an array
 * @array: pointer to integer array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of the first element
 * for which the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
