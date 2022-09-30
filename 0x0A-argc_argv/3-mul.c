#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * print the result of the multiplication, followed by a new line
 * print Error, followed by a new line, and return 1 if no number is passed in
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if not given two arguments
 */

int main(int argc, char *argv[])
{
	int i, multi;

	multi = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}

	printf("%d\n", multi);
	return (0);
}
