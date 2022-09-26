#include <stdio.h>
#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string to search
 * @needle: substring
 *
 * Return:  pointer to the beginning of the located substring, or Null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *start = haystack;
		char *search = needle;

		while (*start == *search && *search != '\0')
		{
			*start++;
			*search++;
		}

		if (*search == '\0')
			return (haystack);
	}

	return ('\0');
}
