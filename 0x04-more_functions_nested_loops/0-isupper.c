#include "main.h"
/**
 * _isupper - to check for uppercase
 * @c: input
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
