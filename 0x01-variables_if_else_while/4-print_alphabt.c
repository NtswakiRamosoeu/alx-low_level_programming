#include <stdio.h>
/**
 * main - alphabet in lowercase excluding q and e followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		if (v != 'e' && v != 'q')
			putchar(v);
	putchar('\n');
	return (0);
}
