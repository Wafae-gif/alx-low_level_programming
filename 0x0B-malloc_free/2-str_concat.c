#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * str_concat - returned a pointer to a newly allocated space
 * which contains the contents of a string s1, followed by
 * the contents of a string s2
 * @s1: the first string
 * @s2: the second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *s;

	j = 0;
	if (s1 == NULL || s2 == NULL)
	return (NULL);
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < strlen(s1))
	{
		s[i] = s1[i];
	i++;
	}
	while (j < strlen(s2))
	{
		s[i] = s2[j];
	i++;
	j++;
	}
	s[j] = '\0';
	return (s);
}
