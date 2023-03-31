#include "main.h"

/**
 * get_function - function used to find and return a necesary function
 * @format: character to check for the necesary function
 * Return: returns a pointer to a function
 */

int (*get_function(char format))(va_list ap, int *total)
{
	int loop = 0;

	format_t operators[] = {
		{'c', printf_c},
		{'s', printf_s},
		{'%', printf_same},
		{'d', printf_d},
		{'i', printf_d},
		{'u', printf_u},
		{'b', printf_b},
		{'x', printf_H},
		{'X', printf_h},
		{'o', printf_o},
		{'\0', NULL}
	};

	while (operators[loop].op)
	{
		if (operators[loop].op == format)
		{
			return (operators[loop].f);
		}
		loop++;
	}
	return (NULL);
}
