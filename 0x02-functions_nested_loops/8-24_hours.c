#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * n from 00:00 23:59 minutes loop
 * and rests minutes
 * Return: 0;
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder = 0;
	int mins_remainder = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar('1');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
