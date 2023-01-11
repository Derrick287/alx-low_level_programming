#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: the size of the memory to print
 * @c: storaged char
 * Return: A pointer to Array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (a);
}
