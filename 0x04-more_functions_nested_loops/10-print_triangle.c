#include "main.h"
/**
 * print_triangle - prints traingles
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;
		int b;

		for (p = 1; p <= size; p++)
		{
			for (b = p; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= p; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
