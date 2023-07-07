#include "main.h"
/**
 * _isdigit - Entry point
 *
 * Description: 'This program will test digits
 *
 * @c: Integer to be tested
 *
 * Return: Void (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
