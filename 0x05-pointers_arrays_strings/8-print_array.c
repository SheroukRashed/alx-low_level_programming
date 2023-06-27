#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - Entry point
 *
 * Description: 'This program will reverse a string
 *
 * @a: Pointer to char to be tested
 * @n: Integer
 *
 * Return: Void (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
