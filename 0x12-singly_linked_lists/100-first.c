#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Outputs a statement prior to the execution of main.
 */
void first(void)
{
	/* Display the given message */
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
