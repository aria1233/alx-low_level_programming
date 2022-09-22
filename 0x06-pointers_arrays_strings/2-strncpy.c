#include "main.h"
#include <stdio.h>

/**
 *_strncpy - a function that copies a string.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be used.
 *
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;
	
	for (byteCount = 0; byteCount <  && src[byteCount] != '\0'; byteCount++)
	dest[byteCount] = src[bytCount];
	for (; byteCount < n; byteCount++)
	dest[byteCount] = '\0';
	return (dest);
}
