#include "main.h"

/**
 * printf_b - prints a binary number
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_b(va_list ap, int *total)
{
	unsigned int num;
	int cant = 0;
	char *str;

	str = malloc(sizeof(char) * 64);
	if (!str)
		return (-1);
	num = va_arg(ap, unsigned int);
	while (num > 0)
	{
		str[cant] = ((num % 2) + '0');
		num /= 2;
		cant++;
	}
	print_rev(str);
	free(str);
	*total += cant;
	return (0);
}

/**
 * printf_h - prints a hexadecimal number
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_h(va_list ap, int *total)
{
	unsigned int num;
	unsigned int new_num;
	int cant = 0;
	char diff[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	char *str;

	str = malloc(sizeof(char) * 64);
	if (!str)
		return (-1);
	num = va_arg(ap, unsigned int);
	while (num > 0)
	{
		new_num = num % 16;
		if (new_num > 9)
		{
			new_num -= 10;
			str[cant] = diff[new_num];
		}
		else
		{
			str[cant] = new_num + '0';
		}
		num /= 16;
		cant++;
	}
	print_rev(str);
	free(str);
	*total += cant;
	return (0);
}

int printf_H(va_list ap, int *total)
{
	unsigned int num;
	unsigned int new_num;
	int cant = 0;
	char diff[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char *str;

	str = malloc(sizeof(char) * 64);
	if (!str)
		return (-1);
	num = va_arg(ap, unsigned int);
	while (num > 0)
	{
		new_num = num % 16;
		if (new_num > 9)
		{
			new_num -= 10;
			str[cant] = diff[new_num];
		}
		else
		{
			str[cant] = new_num + '0';
		}
		num /= 16;
		cant++;
	}
	print_rev(str);
	free(str);
	*total += cant;
	return (0);
}



/**
 * printf_o - prints an octal number
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_o(va_list ap, int *total)
{
	unsigned int num;
	int cant = 0;
	char *str;

	str = malloc(sizeof(str) * 64);
	if (!str)
		return (-1);
	num = va_arg(ap, unsigned int);
	while (num > 0)
	{
		str[cant] = ((num % 8) + '0');
		num /= 8;
		cant++;
	}
	print_rev(str);
	free(str);
	*total += cant;
	return (0);
}
