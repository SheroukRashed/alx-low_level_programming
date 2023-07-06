#include "main.h"
/**
 * is_prime_number - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @n: Int to be tested
 *
 * Return: Integer (Success)
 */
int is_prime_number(int n)
{
	return (_get_prime(n, 1));
}

/**
 * _get_prime - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @x: Int to be tested
 * @y: Int to be tested
 *
 * Return: Integer (Success)
 */
int _get_prime(int x, int y)
{
	if (x == 1 || x == -1)
		return (0);
	if (x % y == 0 && x != y && y != 1)
		return (0);
	if (x == y)
		return (1);
	else
		return (_get_prime(x, y + 1));
}
