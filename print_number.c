#include "main.h"

/**
 * print_number - prtins a number using _putchar
 * @n: input number
 * @len: the len of all the printed numbers
 * Return:len of printed numbers
*/

int print_number(int n, int len)
{
	int cant = 0;
	unsigned int num;
	char *str;

	str = malloc(sizeof(char) * 64);
	if (!str)
		return (-1);
	cant = 0;
	if (n < 0)
	{
		_putchar('-');
		len++;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	while (num > 0)
	{
		str[cant] = (num % 10) + '0';
		num /= 10;
		cant++;
	}
	len += cant;
	print_rev(str);
	free(str);
	return (len);
}
