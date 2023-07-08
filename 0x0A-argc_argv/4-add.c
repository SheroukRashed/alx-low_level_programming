#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		int x = atoi(argv[i]);

		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] == '-' || !isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
