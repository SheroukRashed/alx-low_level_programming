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
int n;
for (n = 48 ; n <= 57 ; n++)
{
	putchar(n);
	if (n == 57)
		putchar('\n');
}
return (0);
}
