#include "main.h"

/**
 *swap_int - resets the value of given integer to 98
 *
 *@a: parameter
 *
 *@b: parameter
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
