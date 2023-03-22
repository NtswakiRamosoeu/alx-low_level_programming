#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @a: checked integer
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)
{
	int q;

	if (a < 0)
		a = -a;
	q = a % 10;

	if (q < 0)
		q = -q;
	_putchar(q + '0');
	return (q);
}
