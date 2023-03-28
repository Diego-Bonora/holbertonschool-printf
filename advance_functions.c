#include "main.h"

/**
 * printf_b - prints a binary number
 * @ap: list of args
 * @total: total written
 * Return: total of things written
 */

int printf_b(va_list ap, int total)
{
        int num;
        int cant = 0;
        char *str;

        str = malloc(sizeof(char));
        num = va_arg(ap, int);
        while (num > 0)
        {
                str[cant] = ((num % 2) + '0');
                num /= 2;
                str = realloc(str, sizeof(char) * (sizeof(str) + 1));
                cant++;
        }
        print_rev(str);
        total += cant;
        return (total);
}
