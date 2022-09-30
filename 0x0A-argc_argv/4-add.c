#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  multiplies two numbers
 * print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Return: 0 on success, 1 if theres a non-digit arg
 */

int main(int argc, char *argv[])
{
	int i, sum, count;

	count = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
