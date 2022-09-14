#include "main.h"

/**
 * main - Entry point 
 * Description: prints alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
