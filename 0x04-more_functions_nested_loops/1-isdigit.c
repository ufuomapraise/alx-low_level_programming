#include "main.h"
/**
 * _isdigit - creates a function that checks for numbers 0-9
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
