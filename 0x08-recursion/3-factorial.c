#include "main.h"
/**
 * factorial - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @n: Int to be tested
 *
 * Return: Integer (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (factorial(n - 1) * n);
}
