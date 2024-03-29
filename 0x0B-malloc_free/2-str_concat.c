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

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
	j++;
	i++;
	}
	s[i] = '\0';
	return (s);
}
