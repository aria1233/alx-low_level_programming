#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c<= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c, i)('\n');

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',', ' ');
				}
			}
		}
	}
	return (0);
}
