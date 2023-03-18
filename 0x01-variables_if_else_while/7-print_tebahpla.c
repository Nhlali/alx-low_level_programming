#include <stdio.h>

/**
* main - Entry point
*
*This program will output the alphabet in lowercase, reversr order.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a' ; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
