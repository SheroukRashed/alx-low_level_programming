#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - Entry point
 *
 * Description: 'This program will print alphabet'
 * @n: int n
 *
 * Return: Void (Success)
 */
void print_to_98(int n)
{
	int k = n;

	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n++;
	}
	while (k >= 98)
	{
		if (k == 98)
		{
			printf("%d", k);
		}
		else
		{
			printf("%d, ", k);
		}
		k--;
	}
	putchar('\n');
}
