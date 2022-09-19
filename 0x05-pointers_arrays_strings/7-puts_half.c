#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * print the second half of the string
 * If the number of characters is odd
 * the function should print the last n characters of the string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int len1;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		len1 = (len - 1) / 2;
		len1 += 1;
	}
	else
	{
		len1 = len / 2;
	}

	for (; len1 < len; len1++)
	{
		putchar(str[len1]);
	}
	putchar('\n');
}
