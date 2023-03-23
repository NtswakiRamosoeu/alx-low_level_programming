#include "main.h"
/**
 * _isdigit - checks for a digit from 0 till 9
 * @c: checked digit
 * Return: 1 (Success) or 0
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c >= 9))
		return (0);
	else
		return (1);
}
