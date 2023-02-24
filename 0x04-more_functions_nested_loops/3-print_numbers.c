#include "main.h"
/**
 * print_numbers -prints the numbers 0 - 9 then a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c + 48);
	_putchar('\n');
}
