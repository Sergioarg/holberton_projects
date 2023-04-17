#include <stdio.h>
#include <stdlib.h>

/**
* is_digit - validates if the character is a number
* @str: the pointer to direct
* Return: Result
*/

int is_digit(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	return ((*str >= '0' && *str <= '9') && is_digit(str + 1));
}

/**
* main - print product of multiplication of two arguments
* @argc: counter of arguments
* @argv: arguments
* Return: (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_digit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
