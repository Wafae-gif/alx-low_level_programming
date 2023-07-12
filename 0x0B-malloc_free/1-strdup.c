#include "main.h"
#include <stdlib.h>
#include <stddef.h>
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

	strd = malloc(sizeof(char) * sizeof(str));
	if(strd == NULL || str == NULL)
	{
		return (NULL);
	}
	for(i = 0; i < sizeof(str); i++)
		strd[i] = str[i];
	return (strd);
}
