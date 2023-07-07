#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *
 * Description: 'This program will print alphabet'
 * @c: int c
 *
 * Return: Int (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
