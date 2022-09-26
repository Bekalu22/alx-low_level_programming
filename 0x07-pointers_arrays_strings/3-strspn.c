#inclde "main.h"

/**
 * _strspn - prints the consecutive characters of s1 that are in s2.
 *
 * @s: source string
 *
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}
		a++;
	}

	return (t);
}
