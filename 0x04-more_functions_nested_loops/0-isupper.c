#include "main.h"
/**
 * _isupper - Entry point
 *
 * Description: 'This program will test upper case letters
 *
 * @c: Integer to be tested
 *
 * Return: Void (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
