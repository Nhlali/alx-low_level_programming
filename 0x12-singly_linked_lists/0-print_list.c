#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
*
* @h :  Pointer to head of list_t list.
*
* Return: number of elements.
*
*/

size_t print_list(const list_t *h)
{
	const list_t *current_node;
	int count = 0;
	current_node = h;

	while (current_node)
	{
		if (current_node->str)
		{
			printf("[%d] %s\n", current_node->len,current_node->str);
			count++;
		}
		else
		{
			printf("[0] nil\n");
			count++;
		}

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
