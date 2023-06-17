#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
{
	putchar(ch);
	if (ch == 'a')
		putchar('\n');
}
return (0);
}
