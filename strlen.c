#include "main.h"
/**
 * _strlen - counts the amount of characters in a string
 * @s: input string
 * Return: amount of characters on s
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{}
	return (count);
}
