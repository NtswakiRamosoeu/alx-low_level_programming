#include <stdio.h>
/**
 * main - alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;
	char q;

	{
	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	}
	{
	for (q = 'A'; q <= 'Z'; q++)
		putchar(q);
	putchar('\n');
	}
	return (0);
}
