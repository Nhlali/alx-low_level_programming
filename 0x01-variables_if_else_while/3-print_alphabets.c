#include <stdio.h>

/**
* main - Entry point
*
*This program will assign a random number to the variable n each time it is
*executed.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z' ; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z' ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
