#include <stdio.h>
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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
