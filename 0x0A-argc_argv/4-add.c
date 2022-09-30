#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Return: 0 on success, 1 if theres a non-digit arg
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
