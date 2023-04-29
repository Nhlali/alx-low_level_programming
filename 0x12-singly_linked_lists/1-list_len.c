#include <stdlib.h>
#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked list_t
* list.
*
* @h :  Pointer to head of list_t list.
*
* Return: number of elements.
*
*/

size_t list_len(const list_t *h)
{
	const list_t *current_node;
	int count = 0;
	current_node = h;

	while (current_node)
	{
		count++;

		if (current_node->next)
		{
			current_node = current_node->next;
		}
		else
		{
			break;
		}
	}

	return (count);
}
