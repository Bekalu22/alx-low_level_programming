#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 *
 * rev_string - Prints a string in reverse order
 *
 * @s: string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = strlen(s);
	
	while (len--)
		putchar(*(s + len);
	putchar(10);
	
}
