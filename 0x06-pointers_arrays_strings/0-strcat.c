#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @scr: source string
 * overwriting the terminating null byte at the end of dest
 * adds a terminating null byte
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int str = 0, str1 = 0;

	while (dest[str] != '\0')
	{
		str++;	
	}

	while (src[str1] != '\0')
	{
		dest[str] = src[str1];
		str1++;
		str++;
	}

	dest[str] = '\0';
	return (dest);
}
