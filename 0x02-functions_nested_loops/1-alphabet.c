#include "main.h"

/**
* print alphabet -> prints the lowercase alphabets
*
* Returns: 0
*/

ivoid print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
