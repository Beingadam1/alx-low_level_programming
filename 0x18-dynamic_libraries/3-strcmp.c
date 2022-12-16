#include "main.h"

/**
 * _strcmp - ompares two strings
 * @s1: first strings
 * @s2: second strings
 * Return: 0 if equal, >0 if s1 is great than s1 and < 0 if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
