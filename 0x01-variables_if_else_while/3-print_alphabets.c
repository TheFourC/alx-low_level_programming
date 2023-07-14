#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 97;
	int n = 65;

	while (d < 123)
	{
		putchar(d);
		d++;
	}
	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
