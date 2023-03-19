#include <stdio.h>
/**
 * main - single digit numbers base 10 from 0 excluding some functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	v = 0;
	while (v < 10)
	{
		putchar(v + '0');
		v++;
	}
	putchar('\n');
	return (0);
}
