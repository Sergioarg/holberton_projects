#include <stdio.h>
#include <stdlib.h>
/**
 * main - print product of multiplication of two arguments
 * @argc: counter of arguments
 * @argv: arguments
 * Return: (Success)
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
