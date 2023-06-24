#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Fizz Problem followed by a new line.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long i = 3;

	while (n % 2 == 0)
	{
		printf("%d\n", 2);
		n = n / 2;
	}

	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%ld\n", i);
			n = n / i;
		}
	}

	if (n > 2)
	{
		printf("%ld\n", n);
	}
	return (0);
}
