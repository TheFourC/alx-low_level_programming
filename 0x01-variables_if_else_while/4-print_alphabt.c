#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 97;

	while (d < 123)
	{
		if (d == 101 || d == 113)
		{
			d++;
			continue;
		}
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
