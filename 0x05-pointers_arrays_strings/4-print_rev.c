#include "main.h"
#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: number tested
 * Return: Always 0
 */

void print_rev(char *s)

{

	int i = 0;

	while (*(s + i))

	{

		i++;

	}

	for (i--; i >= 0; i--)

		putchar(*(s + i));

	putchar('\n');

}
