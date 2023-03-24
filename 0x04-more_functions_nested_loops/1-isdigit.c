#include "main.h"

/**
* _isdigit - function that checks for uppercase character.
*
* @c :  The character to test.
*
* Return: digit 1, otherwise 0.
*
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
