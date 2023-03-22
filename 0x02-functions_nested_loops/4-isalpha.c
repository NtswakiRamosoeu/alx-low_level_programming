#include "main.h"
/**
 * _isalpha - checks for alphabets and returns 0 or 1
 * @c: checked character
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
