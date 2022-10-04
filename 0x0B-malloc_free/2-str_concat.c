#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat -  function that concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: two strings concatenated or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	str = malloc((sizeof(char) * l) + 1);

	if (str == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			str[k] = s1[k];
		}

		if (k >= i)
		{
			str[k] = s2[j];
			j++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
