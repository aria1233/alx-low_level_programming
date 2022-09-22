#include "main.h"
#include <stdio.h>

/**
 *_strncat - function that concatenates two strings
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter, j;
	/* j is a counter for  n bytes of src to be concatenated */
	/* count = length of destination string */

	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, counter++)
	{
		dest[counter] = src[j];
	}
	dest[counter] = '\0';
	return (dest);
}
