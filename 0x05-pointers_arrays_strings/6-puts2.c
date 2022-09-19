#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++
	}

	if (i % 2 == 0)
		putchar(*(str + i));

	putchar('\n');
}
