#include "main.h"

/**
 * _isupper - takes a date and prints how many days are left in the year, taking leap years into account
 * @c: alphabet
 * Return: (0)
 *
 */

int _isupper(int c)

{

	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)

	if (ch == c)

	return (1);

	return (0);

}
