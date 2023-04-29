#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - add a node at the end of list
* @head: the head of the list
* @str: a given string
*
* Return: a pointer to the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *tmp;
	tmp = *head;
	unsigned int count = 0;

	new_element = malloc(sizeof(list_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		count++;
		str++;
	}

	new_element->str = strdup(str - count);
	new_element->len = count;

	if (*head == NULL)
	{
		new_element->next = NULL;
		*head = new_element;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_element;
	}
	return (new_element);
}
