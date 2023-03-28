#include "main.h"

/**
 * _printf - prints
 * @format: input for the printf
 * Return: int 0
 */

int _printf(const char *format, ...)
{
	int flag;
	va_list ap;
	int total_len = 0;
	int len;
	int len2;

	format_t operators[] = {
		{'c', printf_c},
		{'s', printf_s},
		{'%', printf_same},
		{'d', printf_d},
		{'i', printf_d},
		{'u', printf_u},
		{'b', printf_b},
		{'x', printf_h},
		{'X', printf_h},
		{'o', printf_o},
		{'\0', NULL}
	};

	va_start(ap, format);
	for (len = 0; format[len]; len++)
	{
		flag = 0;
		if (format[len] == '%')
		{	len2 = 0;
			while (operators[len2].op)
			{
				if (format[len + 1] == operators[len2].op)
				{	total_len = operators[len2].f(ap, total_len);
					len++;
					flag = 1;
			       		break; }
				len2++; }
			if (flag == 0)
			{	_putchar(format[len]);
				total_len++; } }
		else
		{	_putchar(format[len]);
			total_len++; }
	}
	va_end(ap);
	return (total_len);
}
