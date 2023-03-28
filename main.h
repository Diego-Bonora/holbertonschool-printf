#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n, int len);
int print_unsigned_num(unsigned int n, int len);
int _strlen(char *s);
void print_rev(char *s);

/**
 * struct format - structure for calling diferent functions
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct format
{
	char op;
	int (*f)(va_list ap, int total);
} format_t;

int printf_c(va_list ap, int total);
int printf_s(va_list ap, int total);
int printf_same(va_list ap, int total);
int printf_d(va_list ap, int total);
int printf_u(va_list ap, int total);
int printf_b(va_list ap, int total);
int printf_h(va_list ap, int total);
int printf_o(va_list ap, int total);
#endif
