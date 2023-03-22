#include "main.h"

/**
* _abs - function that computes the absolute value of an integer.
*
* @n :  integer value.
*
* Return: positive 1, zero 0, negative -1.
*
*/
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
