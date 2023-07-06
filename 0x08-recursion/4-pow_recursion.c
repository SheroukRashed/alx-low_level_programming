#include "main.h"
/**
 * factorial - Entry point
 *
 * Description: 'This program will print factorial n
 *
 * @x: Int to be tested
 * @y: Int to be tested
 *
 * Return: Integer (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return 1;
	return (_pow_recursion(x, y - 1) * x);
}
