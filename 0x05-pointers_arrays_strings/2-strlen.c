#include "main.h"

/**
* _strlen - function that returns the length of a string.
*
* @s : pointer.
*
*/
int _strlen(char *s)
{
	char temp;
	int i = 0;

	temp = *(s + sizeof(char));
	while (temp != '\0')
	{
		i++;
		temp = *(s + i * sizeof(char));
	}

	return (i);
}
