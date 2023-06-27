#include "main.h"
#include <string.h>
/**
 * rev_string - Entry point
 *
 * Description: 'This program will reverse a string
 *
 * @s: Pointer to char to be tested
 *
 * Return: Void (Success)
 */
void rev_string(char *s)
{
	int count = strlen(s) - 1;
	char *rev;
	char temp;
	int rev_counter = 0;

	rev = s;
	s = rev + count;

	while (rev_counter <= 0.5 * count)
	{
		temp = *rev;
		*rev = *s;
		*s = temp;
		s--;
		rev++;
		rev_counter++;
	}
}
