#include "main.h"

/**
 * _realloc - realocates memory
 * @ptr: pointer input
 * @size: new size
 * Return: pointer to new space
 */

char *_realloc(char *ptr, size_t size)
{
	int len = 0;
	char *new;

	new = malloc(size);
	if (!new)
		exit(-1);
	while (ptr[len])
	{
		new[len] = ptr[len];
		len++;
	}
	new[len] = '\n';
	free(ptr);
	return (new);
}
