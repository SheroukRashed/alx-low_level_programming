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
int n;
for (n = 0 ; n <= 9 ; n++)
{
	printf("%d", n);
	if (n == 9)
		printf("\n");
}
return (0);
}
