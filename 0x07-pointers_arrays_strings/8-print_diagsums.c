#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 *
 * Description: 'This program will print diagonals sum
 *
 * @a: Char* to be tested
 * @size: Int
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * i) + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
