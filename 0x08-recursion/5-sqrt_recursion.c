#include "main.h"
/**
 * _sqrt_recursion - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @n: Int to be tested
 *
 * Return: Integer (Success)
 */
int _sqrt_recursion(int n)
{
	return (_get_root(n, 1));
}

/**
 * _get_root - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @x: Int to be tested
 * @y: Int to be tested
 *
 * Return: Integer (Success)
 */
int _get_root(int x, int y)
{
	int mid = x / 2;

	if (y * y == x)
		return (y);
	if (y > mid)
		return (-1);
	return (_get_root(x, y + 1));
}
