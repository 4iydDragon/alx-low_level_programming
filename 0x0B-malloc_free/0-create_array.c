#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array, and initializes it with a specific char.
 *
 * @size: The size of the array
 *
 * @c: Specific char to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = NULL;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (; i < size; i++)
		*(str + i) = c;

	return ((char *)str);
}
