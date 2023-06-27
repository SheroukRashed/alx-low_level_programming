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
	/*int count = strlen(s);*/
	char *rev;
	/*int rev_counter = 0;*/	
	rev = s - 1;
	s = rev;
	/**while (count >= 1)
	{
		*(rev + rev_counter) = *(s + count - 1);
		count--;
		rev_counter++;
	}*/

}
