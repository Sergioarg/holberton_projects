#ifndef HOLBERTON_H
#define HOLBERTON_H
/* This file contains the prototypes needed for the project */

/* stdio - lib */
#include <stdio.h>
/* stdlib - lib */
#include <stdlib.h>
/* 0. function that creates an array of chars. */
char *create_array(unsigned int size, char c);
/* 1. returns a pointer to a newly allocated space in memory.*/
char *_strdup(char *str);
/* 2. function that concatenates two strings. */
char *str_concat(char *s1, char *s2);
/* 3. function that returns a pointer to a 2 dimensional array of integers. */
int **alloc_grid(int width, int height);
/* 4. function that frees a 2 dimensional grid */
void free_grid(int **grid, int height);
/* 5. function that concatenates all the arguments of your program.*/
char *argstostr(int ac, char **av);
/* 6.  function that splits a string into words. */
char **strtow(char *str);
/* _putchar - does what the putchar function does */
int _putchar(char c);
#endif
