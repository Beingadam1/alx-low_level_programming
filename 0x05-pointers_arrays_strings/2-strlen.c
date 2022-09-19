#include <stdio.h>
#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: string
 * Return: strng length
 */

int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	printf("%d\n", len);
}
