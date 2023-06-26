#include "main.h"
/**
 * swap_int - Entry point
 *
 * Description: 'This program will swap 2 values
 *
 * @a: Pointer to int to be tested
 * @b: Pointer to int to be tested
 *
 * Return: Void (Success)
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = *b;
	*b = ptr;
}
