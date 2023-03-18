#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* main - Entry point
*
*This program will assign a random number to the variable n each time it is
*executed. If n is > 0 positive is output, if n = 0 zero is output, if n <
*0 negative is output.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
