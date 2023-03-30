#include "main.h"

/**
 * printf_c - prints a char
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_c(va_list ap, int *total)
{
	char letter;

	letter = va_arg(ap, int);
	
	_putchar(letter);
	*total += 1;
	return (0);
}

/**
 * printf_s - prints a string
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_s(va_list ap, int *total)
{
	char *string;

	string = va_arg(ap, char*);
	if (!string)
		string = "(null)";
	write (1, string, _strlen(string));
	*total += _strlen(string);
	return (0);
}

/**
 * printf_same - prints a % sign
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_same(va_list ap, int *total)
{
	(void)ap;
	_putchar('%');
	*total += 1;
	return (0);
}

/**
 * printf_d - prints an integer
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_d(va_list ap, int *total)
{
	int num;
	int sum = 0;

	num = va_arg(ap, int);
	*total += print_number(num, sum);
	return (0);
}

/**
 * printf_u - prints an unsigned int
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_u(va_list ap, int *total)
{
	unsigned int num;
	int sum = 0;

	num = va_arg(ap, unsigned int);
	*total += print_unsigned_num(num, sum);
	return (0);

}
