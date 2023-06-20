#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 *
 * Description: 'This program will print alphabet'
 * @n: int n
 *
 * Return: Int (Success)
 */
int print_last_digit(int n)
{
	_putchar(abs(n % 10) + '0');
	return (abs(n % 10));
}
