#include "main.h"

/**
 * puts2 -prints very other character in string
 *
 * @str: pointer to string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else 
			continue;
	}
	_putchar('\n');
}
