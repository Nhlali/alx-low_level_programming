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

/**
* print_last_digit - function that prints the last digit of a number.
*
* @n :  integer value.
*
* Return: positive 1, zero 0, negative -1.
*
*/
int print_last_digit(int n)
{

	int v;

	v = n % 10;
	_putchar('0' + _abs(v));
	return (_abs(v));
}
