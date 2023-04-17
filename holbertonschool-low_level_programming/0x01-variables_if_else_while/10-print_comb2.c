#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers 0 to 100
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			putchar(i);
			putchar(j);
			if (i < 57 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
