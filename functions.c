#include "main.h"

/**
 *
 *
 *
 */

int printf_c(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);
	write(1, &letter, 1);
	return (0);
}

int printf_s(va_list ap)
{
	char *string;

	string = va_arg(ap, char*);
	write(1, string, strlen(string));
	return (0);
}

int printf_same(va_list ap)
{
	char letter = '%';

	(void)ap;
	write(1, &letter, 1);
	return (0);
}
