#include "main.h"

/**
* _strlen - function that returns the length of a string.
*
* @s : pointer.
*
* return: length of string;
*/
int _strlen(char *s)
{
	unsigned int count = 0;

    while(*s!='\0')
    {
        count++;
        s++;
    }

    return count;
}
