#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - create array of chars of size of size
 * and initializes it char c
 * @size: size of array
 * @c: Char to initialize
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < size; i++)
			p[i] = c;
	return (p);
}

