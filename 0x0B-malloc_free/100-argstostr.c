#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your program.
 *
 * @ac: int ac is the argument counter.
 *
 * @av: int **av is the argument vector.
 *
 * Return: Returns a pointer to a new str or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int arg_c, arg_v, size;
	int i = 0;
	char *pnt;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg_c = 0; arg_c < ac; arg_c++)
	{
		for (arg_v = 0; av[arg_c][arg_v] != '\0'; arg_v++)
		{
			size++;
		}
		size++;
	}

	pnt = malloc(size * sizeof(char));

	if (pnt == NULL)
		return (NULL);

	arg_c = 0;
	while (arg_c < ac)
	{
		arg_v = 0;
		while (av[arg_c][arg_v] != '\0')
		{
			pnt[i] = av[arg_c][arg_v];
			i++;
			arg_v++;
		}
		pnt[i] = '\n';
		i++;
		arg_c++;
	}
	i++;
	pnt[i] = '\0';
	return (pnt);
}
