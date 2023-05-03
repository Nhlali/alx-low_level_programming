#include <stdio.h>

/**
* main - main function.
* @argc : number of arguments.
* @argv : array that contains the arguments.
* Return: 0.
*/
 
int main(int argc, char *argv[])
{

	while(*argv)
	{
		(void) argc;
		printf("%s\n", *argv);
		argv++;
	}

	return (0);

}
