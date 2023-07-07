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
	int i = 0;
	int n = 0;
	int digit = 0;
	int pos = 0;
	int neg = 0;

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
			digit = s[i] - '0';
			if (n >= 0)
			{
				n = (n * 10) + digit;
			}
			else
			{
				n = (n * 10) - digit;
			}
		}
		else
		{
			if (n != 0)
				break;
		}
		i++;
	}
	if (neg > pos)
	{
		n = n * -1;
	}
	return (n);
}
