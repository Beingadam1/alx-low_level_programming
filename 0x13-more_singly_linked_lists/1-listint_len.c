#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cur = h;
	size_t count = 0;

	while (cur != NULL)
	{
		count += 1;
		cur = cur->next;
	}
	return (count);
}
