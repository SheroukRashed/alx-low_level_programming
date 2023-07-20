#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: pointer to integer array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
