#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase characters
 * @c: integer value it receives
 * Return: 1 if true, 0 otherwise
 */

void test_islower(int c)
{
	int i = 'a';
	i =_islower(c);

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
