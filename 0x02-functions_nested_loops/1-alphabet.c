#include <stdio.h>
/**
 * print_alphabet - to pring the alphabets
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
