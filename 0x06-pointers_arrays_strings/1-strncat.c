#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str = 0, str1 = 0;

	while (dest[str] != '\0')
		str++;
	while (src[str1] != '\0' && str1 < n)
	{
		dest[str] = src[str1];
		str1++;
		str++;
	}
	dest[str] = '\0';
	return (dest);
}
