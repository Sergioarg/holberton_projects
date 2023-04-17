#ifndef HOLBERTON_H
#define HOLBERTON_H
/* This file contains the prototypes needed for the project */
/* standar lib */
#include <stdio.h>
/* stdlib.h */
#include <stdlib.h>
/* limits.h */
#include <limits.h>
/* 0. function that allocates memory using malloc. */
void *malloc_checked(unsigned int b);
/* 1. Function that concatenates two strings.*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* 2. Function that allocates memory for an array, using malloc. */
void *_calloc(unsigned int nmemb, unsigned int size);
/* 3. Function that creates an array of integers. */
int *array_range(int min, int max);
/* _putchar - does what the putchar function does */
int _putchar(char c);
#endif
