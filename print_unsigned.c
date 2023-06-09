#include "main.h"

/**
 * print_unsigned_num - prtins an unsigned int number using _putchar
 * @n: input number
 * @len: the len of all the printed numbers
 * Return:len of all printed numbers
*/

int print_unsigned_num(unsigned int n, int len)
{
	unsigned int num = 0;
	int cero = 0;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		if (n % 10 == 0)
		{	cero = 1;
			num = num * 10;
			num = num + 1;
			n = n / 10; }
		while (n >= 10)
		{	num = num * 10;
			num = num + n % 10;
			n = n / 10; }
		num = num * 10;
		num = num + n % 10;
		while (num >= 10)
		{	_putchar(num % 10 + '0');
			num = num / 10;
			len++; }
		if (cero == 1)
			_putchar('0');
		else
			_putchar(num + '0');
		len++;
	}
	return (len);
}
