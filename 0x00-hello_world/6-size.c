#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	long int y;
	long long int z;
	char a;
	float b;

	printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(b));
	return (0);
}
