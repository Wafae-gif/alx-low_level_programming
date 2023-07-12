#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string duplicate of
 * the string str
 * @str: the string given
 * Return: a pointer to the duplicated string, or NULL if
 * insufficient memory was available
 */
char *_strdup(char *str)
{
	char *strd;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	strd = malloc(sizeof(char) * strlen(str) + 1);
	if (strd == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
		strd[i] = str[i];
	strd[i] = '\0';
	return (strd);
}
