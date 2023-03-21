#include "main.h"
/**
 * main - Alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
		_putchar(q);
	_putchar('\n');
}
