#include <stdio.h>
/**
 * main - reversed lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;

	for (v = 'z'; v >= 'a'; v--)
		putchar(v);
	putchar('\n');
	return (0);
}
