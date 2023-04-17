#include <stdio.h>
#include <stdlib.h>

/**
* main - print product of multiplication of two arguments
* @argc: counter of arguments
* @argv: arguments
* Return: (Success)
*/

int main(int argc, char const *argv[])
{
	int i;
	printf("argc contain valeus = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("Value argv[%d] = %s and direction  is %p\n", i , argv[i], &argv[i]);
	}

	return (EXIT_SUCCESS);
}
