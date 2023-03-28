#include "main.h"

/**
 * _printf - prints
 * @format: input for the printf
 * Return: int 0
 */

int _printf(const char *format, ...)
{
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
		{'\0', NULL}
	};

	va_start(ap, format);
	for (len = 0; format[len]; len++)
	{
		if (format[len] == '%')
		{
			len2 = 0;
			while (operators[len2].op)
			{
				if (format[len + 1] == operators[len2].op)
				{
					operators[len2].f(ap);
					len++;
				}
				len2++;
			}
		}
		else
		{
			_putchar(format[len]);
		}
		total_len++;
	}
	va_end(ap);
	return (total_len);
}
/*int main(void)
{
	_printf("hola%c", "como");
	putchar('\n');
	return (0);
}*/
