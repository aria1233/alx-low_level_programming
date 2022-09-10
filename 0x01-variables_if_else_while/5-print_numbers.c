#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints single digit numbers of base 10
 * Return: Always o (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
