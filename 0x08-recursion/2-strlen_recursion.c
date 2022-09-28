#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
