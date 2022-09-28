#include "main.h"

/**
 * sqrt_checker - checks for the square root of c
 * @c: number to find the square
 * @g: guess of the square
 * Return: -1 or sqrt of c
 */

int sqrt_checker(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_checker(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_checker(1, n));
}
