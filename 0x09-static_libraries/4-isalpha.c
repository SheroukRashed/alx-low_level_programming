#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * Description: 'This program will print alphabet'
 * @c: int c
 *
 * Return: Int (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
