#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square printed
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;
		int b;

		for (p = 0; p < size; p++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
