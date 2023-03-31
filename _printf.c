#include "main.h"

/**
 * _printf - main function for handmade printf
 * @format: input for the printf
 * Return: ammount of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int total_len = 0;
	int len;
	int (*f)(va_list ap, int *total);

	len = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format && format[len])
	{
		if (format[len] == '%')
		{
			if (!format[len + 1])
				return (-1);
			f = get_function(format[len + 1]);
			if (f)
			{
				f(ap, &total_len);
				len++;
			}
			else
			{
				_putchar(format[len]);
				total_len++;
			}
		}
		else
		{
			_putchar(format[len]);
			total_len++;
		}
		len++;
	}
	va_end(ap);
	return (total_len);
}
