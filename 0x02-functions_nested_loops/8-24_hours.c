#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a, p;

	a = 0;

	while (a < 24)
	{
		p = 0;
		while (p < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar('\n');
			p++;
		}
		a++;
	}
}
