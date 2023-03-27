#include "main.h"

/**
* print_rev - function that prints a string, in reverse,
* followed by a new line.
*
* @s : pointer.
*
*/
void print_rev(char *s)
{
	unsigned int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
