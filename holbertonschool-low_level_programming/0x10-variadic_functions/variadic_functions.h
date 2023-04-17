#ifndef VARIATIC_FUNCTIONS_H
#define VARIATIC_FUNCTIONS_H

/* stdarg.h */
#include <stdarg.h>
/* Standar lib */
#include <stdio.h>
/* Lib stdio */
#include <stdlib.h>

/* 0. sum_them_all */
int sum_them_all(const unsigned int n, ...);

/* 1. print_numbers */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2. print_strings */
void print_strings(const char *separator, const unsigned int n, ...);

/* 3. print_all */
void print_all(const char * const format, ...);

#endif
