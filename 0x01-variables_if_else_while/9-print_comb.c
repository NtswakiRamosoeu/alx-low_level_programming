#include <stdio.h>
/**
 * main - possible combinations of single digit numbers in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar((p % 10) + '0');
		if (p == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
