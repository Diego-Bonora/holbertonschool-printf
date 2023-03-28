#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n);
void print_unsigned(unsigned int n);
int _strlen(char *s);
void print_rev(char *s);

typedef struct format
{
	char op;
	int (*f)(va_list ap);
} format_t;

int printf_c(va_list ap);
int printf_s(va_list ap);
int printf_same(va_list ap);
int printf_d(va_list ap);
int printf_u(va_list ap);
int printf_b(va_list ap);

#endif
