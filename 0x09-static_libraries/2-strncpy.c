#include "main.h"

/**
 * _strncpy - function that copies a string
 * work exactly like strncpy
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str = 0;

	while (src[str] != '\0' && str < n)
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str++;
	}

	return (dest);
}
