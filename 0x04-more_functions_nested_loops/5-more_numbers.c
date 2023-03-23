#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 till 14
 */
void more_numbers(void)
{
	int p;
	int b;

	for (p = 1; p <= 10; p++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
