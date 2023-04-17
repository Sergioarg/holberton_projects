#include <stdio.h>

/**
 * beforeMain - Function that excecute before the main
 *
 * Return: Nothing.
 */
void __attribute__((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
