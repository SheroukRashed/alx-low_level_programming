#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - Entry point
 *
 * Description: 'This program will reverse a string
 *
 * @s: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
int _atoi(char *s)
{
	int n = 0;
	int digit = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (n >= 0)
			{
				digit = s[i] - '0';
				n = (n * 10) + digit;
			}
			else
			{
				digit = s[i] - '0';
				n = (n * 10) - digit;
			}
			if (s[i - 1] == '-')
			{
				n = n * -1;
			}
		}
		else
		{
			if (n != 0)
			{
				break;
			}
		}
		i++;
	}
	return (n);
}
