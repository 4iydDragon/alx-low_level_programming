#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a given string.
 * @s: string to be measured
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		;

	return (i);
}

/**
 * str_concat - Function that concatenates two strings.
 * @s1: String s1 given as a first parameter.
 * @s2: String s2 given as a second parameter.
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i = 0;
	char *s1s2 = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	s1s2 = (char *)malloc((size1 + size2 + 1) * (sizeof(char)));

	if (s1s2 == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(s1s2 + i) = *(s1 + i);

	for (i = 0; i < size2; i++)
		*(s1s2 + (size1 + i)) = *(s2 + i);

	*(s1s2 + (size1 + size2)) = '\0';

	return ((char *)s1s2);
}
