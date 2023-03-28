#include "main.h"

/**
 * print_unsigned - prtins an unsigned int number using _putchar
 * @n: input number
 * Return:nothing
*/

void print_unsigned(unsigned int n)
{
	unsigned int num = 0;
	int cero = 0;

	if (n == 0)
	{
		_putchar('0');
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
			num = num / 10; }
		if (cero == 1)
			_putchar('0');
		else
			_putchar(num + '0');
	}
}
