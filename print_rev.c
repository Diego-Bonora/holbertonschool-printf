#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string input
 * Return: nothing
*/

void print_rev(char *s)
{
	int len = _strlen(s) - 1;
	int count;

	for (count = len; count >= 0; count--)
		_putchar(s[count]);
}
