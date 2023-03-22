#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 * Retur: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char p;

	while (a < 10)
	{
		p = 'a';
		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		a++;
	}
}
