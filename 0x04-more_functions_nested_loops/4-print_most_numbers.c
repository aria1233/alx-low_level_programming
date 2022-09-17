#include "main.h"



/**
 *
 * print_most_numbers - entry point
 *
 *
 *
 * Description: Prints the numbers with _putchar
 *
 *
 *
 * Return: void
 *
 */

void print_most_numbers(void)

{

int  numbers;

for (numbers = '0'; numbers <= '9'; numbers++)

{

if (numbers == '2' || numbers == '4')

continue;

_putchar(numbers);

}

_putchar('\n');
}
