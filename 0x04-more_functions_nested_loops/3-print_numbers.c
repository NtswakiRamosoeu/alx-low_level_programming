#include "main.h"
/**
 * print_numbers - prints digits
 */
void print_numbers(void)
{
	char p;

	p = '0';

	while (p <= '9')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');
}
