#include "main.h"

/**
* print_sign - function that prints the sign of a number.
*
* @n :  integer to test.
*
* Return: positive 1, zero 0, negative -1.
*
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
