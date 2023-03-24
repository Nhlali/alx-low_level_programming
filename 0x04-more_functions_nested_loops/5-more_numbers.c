#include "main.h"

/**
* more_numbers -  function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
*
*/
void more_numbers(void)
{
	int i;
	int t;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				t = 1;
			}
			else
			{
				t = i;
			}
			_putchar(48 + t);
			if (i > 9)
			{
				_putchar(48 + i - 10);
			}
		}
		_putchar('\n');
	}
}
