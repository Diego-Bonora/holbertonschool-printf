#include "main.h"

/**
 * printf_c - prints a char
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_c(va_list ap, int total)
{
	char letter;

	letter = va_arg(ap, int);
	write(1, &letter, 1);
	total++;
	return (total);
}

/**
 * printf_s - prints a string
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_s(va_list ap, int total)
{
	char *string;

	string = va_arg(ap, char*);
	write(1, string, _strlen(string));
	total += _strlen(string);
	return (total);
}

/**
 * printf_same - prints a % sign
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_same(va_list ap, int total)
{
	char letter = '%';

	(void)ap;
	write(1, &letter, 1);
	total++;
	return (total);
}

/**
 * printf_d - prints an integer
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_d(va_list ap, int total)
{
	int num;

	num = va_arg(ap, int);
	if (!num)
		num = 0;
	total = print_number(num, total);
	return (total);
}

/**
 * printf_u - prints an unsigned int
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_u(va_list ap, int total)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	total = print_unsigned_num(num, total);
	return (total);
}
