#include <stdio.h>
#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string to search
 * @needle: substring
 *
 * Return:  pointer to the beginning of the located substring, or Nl
 */

char *_strstr(char *haystack, char *needle)
{
	char *start, *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;

		while (*search == *haystack && *haystack != 0 && *search != 0)
		{
			haystack++;
			search++;
		}

		if (*search == 0)
			return (start);
		haystack = start + 1;
	}

	return ('\0');
}
