#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 122;

	while (d > 96)
	{
		putchar(d);
		d--;
	}
	putchar('\n');
	return (0);
}
