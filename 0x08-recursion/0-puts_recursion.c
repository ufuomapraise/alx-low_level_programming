#include "main.h"


/**
 *
 * _puts_recursion - function to print a string followed by a new line
 * @s 
 *
 * return - 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
