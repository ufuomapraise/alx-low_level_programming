#include "main.h"

/**
 * print_most_numbers - prints all numbers except 0 and 0
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (!(c == 50 || c == 57))
			_putchar(c);
	}
	_putchar('\n');
}
