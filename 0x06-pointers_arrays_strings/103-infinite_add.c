#include "main.h"

/**
 * infinite_add - adds two numbers
 * stringsare not emty and numbers will always bositive or not
 * returns a pointer to the result
 * @n1: first number
 * @n2: second number
 *
 * @r: store result
 *
 * @size_r: size of buffer
 *
 * Return: returns pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - Adds the numbers stored in two strings
 * @n1: The string containing the first number to be added
 * @n2: The string containing the second number
 * @r: The buffer to to store result
 * @r_index: the current index of buffer
 *
 * Return: ifr can store sum display result else 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + ('n2 - '0');
		num += tens;

		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
