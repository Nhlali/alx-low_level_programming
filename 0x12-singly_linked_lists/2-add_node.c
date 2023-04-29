#include <stdlib.h>
#include "lists.h"

/**
* add_node - add a node to the beginning of a linked list
* @head: double pointer to the head of a linked list
* @str: string to add to the new node
*
* Return: pointer to the new node .
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
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
	new_element->next = *head;

	*head = new_element;
	return (new_element);
}
