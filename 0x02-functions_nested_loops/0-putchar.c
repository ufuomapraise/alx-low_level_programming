#include <stdio.h>
/**
 * main - to print puchar using the putchar function
 *
 * Return: always 0
 */
int main(void)
{
	char c[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
		putchar(c[i]);

	putchar('\n');
	return (0);
}
