#include "main.h"

/**
* factorial - function that returns the factorial of a given number.
* @n: number
* Return: factorial value
*/

int factorial(int n)
{
	int fac = 1;

	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	fac = factorial(n - 1);

	return (fac * n);
}
