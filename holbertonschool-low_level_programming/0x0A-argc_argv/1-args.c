#include <stdio.h>

/**
* main - is the main function
* @argc: the number of command line arguments
* @argv: array of size argc
* Return: Always 0.
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
