_printf - format and print data 

This is our printf function recoded from scratch, for education purpose. 

Authorized functions and macros 

write (man 2 write) 

malloc (man 3 malloc) 

free (man 3 free) 

va_start (man 3 va_start) 

va_end (man 3 va_end) 

va_copy (man 3 va_copy) 

va_arg (man 3 va_arg) 

Custom functions prototypes 

int _putchar(char c); 

int _printf(const char *format, ...); 

int(*getspecifier(char))(va_list); 

Functions in file (_printf.c) 

int _printf(const char *format, ...); 

Functions in file (advance_functions.c) 

int printf_b(va_list ap, int *total); 

int printf_h(va_list ap, int *total); 

int printf_H(va_list ap, int *total); 

int printf_o(va_list ap, int *total); 

Functions in file (get_function.c) 

int (*get_function(char format))(va_list ap, int *total) 

Functions in file (main.h) 

int _putchar(char c); 

int _printf(const char *format, ...); 

int print_number(int n, int len); 

int print_unsigned_num(unsigned int n, int len); 

int _strlen(char *s); 

void print_rev(char *s); 

int (*get_function(char format))(va_list ap, int *total); 

int printf_c(va_list ap, int *total); 

int printf_s(va_list ap, int *total); 

int printf_same(va_list ap, int *total); 

int printf_d(va_list ap, int *total); 

int printf_u(va_list ap, int *total); 

int printf_b(va_list ap, int *total); 

int printf_h(va_list ap, int *total); 

int printf_H(va_list ap, int *total); 

int printf_o(va_list ap, int *total); 

Functions in file (normal_functions.c) 

int printf_c(va_list ap, int *total); 

int printf_s(va_list ap, int *total); 

int printf_same(va_list ap, int *total); 

int printf_d(va_list ap, int *total); 

int printf_u(va_list ap, int *total); 

Functions in file (print_number.c) 

int print_number(int n, int len); 

Functions in file (print_rev.c) 

void print_rev(char *s); 

Functions in file (print_unsigned.c) 

int print_unsigned_num(unsigned int n, int len); 

Functions in file (realloc.c) 

char *_realloc(char *ptr, size_t size); 

Functions in file (strlen.c) 

int _strlen(char *s); 
