#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: number of diagonal lines
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;
		int b;

		for (p = 0; p < n; p++)
		{
			for (b = 0; b < n; b++)
			{
				if (p == b)
					_putchar('\\');
				else if (b < p)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
