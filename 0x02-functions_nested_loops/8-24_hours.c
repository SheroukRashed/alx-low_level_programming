#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - Entry point
 *
 * Description: 'This program will print alphabet'
 *
 * Return: Void (Success)
 */
void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			putchar ((h / 10) + '0');
			putchar ((h % 10) + '0');
			putchar(':');
			putchar ((m / 10) + '0');
			putchar ((m % 10) + '0');
			m++;
			putchar('\n');
		}
		h++;
	}
}
