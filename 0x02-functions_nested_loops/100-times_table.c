#include "main.h"

/**
* print_times_table -it prints multiplying table
*
* @n: give n number to multiply
*
* Return: 0 Success
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
