#ifndef VI
#define VI

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif
