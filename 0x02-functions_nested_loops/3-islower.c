#include "main.h"

/**
* _islower - prints 10 times the alphabet, in lowercase,
* followed by a new line.
*
* @c :  The character to test.
*
* Return: lowercase 1, otherwise 0.
*
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
