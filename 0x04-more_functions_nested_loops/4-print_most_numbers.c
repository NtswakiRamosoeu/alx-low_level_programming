#include "main.h"
/**
 * print_most_numbers - prints numbers 0 till 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		if (!(p == '2' || p == '4'))
			_putchar(p);
	}
	_putchar('\n');
}
