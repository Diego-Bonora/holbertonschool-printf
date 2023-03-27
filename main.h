#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);

typedef struct format
{
	char op;
	int (*f)(va_list ap);
} format_t;

int printf_c(va_list ap);
int printf_s(va_list ap);
int printf_same(va_list ap);

#endif
