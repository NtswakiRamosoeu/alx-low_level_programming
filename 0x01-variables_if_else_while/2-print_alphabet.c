#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		putchar(v);
	putchar('\n');
	return (0);
}
