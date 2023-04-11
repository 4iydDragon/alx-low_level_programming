#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a copy of the string given as a parameter.
 * @str: String given as a parameter.
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, length = 0;
	char *s = NULL;

	if (str == NULL)
		return (NULL);

	for (; *(str + length) != '\0'; length++)
		;

	s = (char *)malloc((length + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (; i < (length + 1); i++)
		*(s + i) = *(str + i);

	return (s);
}
