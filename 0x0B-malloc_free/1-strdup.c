#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * Memory for the new string is obtained with malloc
 * and can be freed with free
 * @str: the string to duplicate
 * Return: pointer to the duplicated string, NULL if str = NULL
 */

char *_strdup(char *str)
{
	int j = 0;
	int i = 1;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	newstr = malloc((sizeof(char) * i) + 1);

	if (newstr == NULL)
		return (NULL);

	while (j < i)
	{
		newstr[j] = str[j];
		j++;
	}

	newstr[j] = '\0';
	return (newstr);
}
