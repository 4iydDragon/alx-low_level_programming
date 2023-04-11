#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string containing concatenated args,
 *         or NULL if ac == 0 or av == NULL or on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';

	return (str);
}
