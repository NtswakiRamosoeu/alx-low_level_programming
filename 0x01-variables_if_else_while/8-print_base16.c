#include <stdio.h>
/**
 * main - numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	char p;

	for (s = 0; s < 10; s++)
		putchar(s + '0');
	for (p = 'a'; p <= 'f'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
