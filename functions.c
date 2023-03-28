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
	write(1, string, _strlen(string));
	return (0);
}

int printf_same(va_list ap)
{
	char letter = '%';

	(void)ap;
	write(1, &letter, 1);
	return (0);
}

int printf_d(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	print_number(num);
	return (0);
}

int printf_u(va_list ap)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	print_unsigned(num);
	return (0);
}

int printf_b(va_list ap)
{
	int num;
	int cant = 0;
	char *str;

	str = malloc(sizeof(char));
	num = va_arg(ap, int);
	while (num > 0)
	{
		str[cant] = ((num % 2) + '0');
		num /= 2;
		str = realloc(str, sizeof(char) * (sizeof(str) + 1));
		cant++;
	}
	print_rev(str);
	return (0);
}
