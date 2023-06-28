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
	int i, n, digit, pos, neg = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
		{
			pos++;
		}
		else if (s[i] == '-')
		{
			neg++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
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
	neg > pos ? return (-n) : return (n);
}
