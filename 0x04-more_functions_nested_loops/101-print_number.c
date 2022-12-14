#include <stdio.h>
#include "main.h"

/**
 * print_number -prints a number
 * @n: the number to print
 * Return: no returns
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 0)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
