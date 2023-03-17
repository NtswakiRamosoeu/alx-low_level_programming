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

	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long long int: %d byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(b));
	return (0);
}
