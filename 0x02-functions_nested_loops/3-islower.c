#include "main.h"
/**
 * _islower - checks if c is a lowercase character
 * Return: Always 1 (Success)
 * @c: is the character to be checked if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
