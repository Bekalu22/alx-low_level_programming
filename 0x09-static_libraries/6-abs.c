#include "main.h"
#include <stdio.h>

/**
 * _abs - function that prints a absolute value of number
 *
 * @n: takes in an number
 *
 * Return: 1 if greater than 0, 0 if zero and -1 if less than 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
