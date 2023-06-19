#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program will assign a random number
 * to the variable n each time it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j;
int k;
while (i <= 57)
{
	j = 48;
	while (j <= 57)
	{
		if (i >= j)
		{
			j = j + 1;
			continue;
		}
		k = 48;
		while (k <= 57)
		{
			if (j >= k)
			{
				k++;
				continue;
			}
			if (!(i == 48 && j == 49 && k == 50))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i);
			putchar(j);
			putchar(k);
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
