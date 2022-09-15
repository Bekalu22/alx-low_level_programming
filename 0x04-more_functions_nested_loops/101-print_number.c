#include <stdio.h>
#include "main.h"

/**
 * print_number -prints a number
 * @n: the number to print
 * Return: no returns
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	putchar((x % 10) + '0');
}
