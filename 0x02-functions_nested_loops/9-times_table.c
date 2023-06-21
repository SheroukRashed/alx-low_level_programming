#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * times_table - Entry point
 *
 * Description: 'This program will print alphabet'
 *
 * Return: Void (Success)
 */
void times_table(void)
{
	int i = 0;
	int j, mul;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			mul = i * j;
			if (mul <= 9)
			{
				putchar (mul + '0');
			}
			else
			{
				putchar ((mul / 10) + '0');
				putchar ((mul % 10) + '0');
			}
			if (j != 9)
			{
				putchar (',');
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
