#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'This program will print count of args
 *
 * @argc: Arguments count to be tested
 * @argv: Arguments values to be tested
 *
 * Return: Int (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
