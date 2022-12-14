#include "main.h"
#include <stdio.h>

/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int count, i;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++, count++)
	{
		dest[count] = src[i];
	}

	dest[count] = '\0';
	return (dest);
}
