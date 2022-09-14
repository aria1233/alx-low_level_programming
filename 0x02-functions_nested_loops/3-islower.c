#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase characters
 * @c: integer value it receives
 * Return: 1 if true, 0 otherwise
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
