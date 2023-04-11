#include "main.h"
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
  int i, j, len = 0, total_len = 0;
  char *str;

  if (ac == 0 || av == NULL)
    return NULL;

  /* Calculate total length of arguments */
  for (i = 0; i < ac; i++) {
    len = strlen(av[i]);
    total_len += len;
  }

  /* Add space for newlines and null terminator */
  total_len += ac + 1;

  /* Allocate memory for new string */
  str = malloc(total_len * sizeof(char));
  if (str == NULL)
    return NULL;

  /* Copy arguments into new string, separated by newlines */
  len = 0;
  for (i = 0; i < ac; i++) {
    strcpy(str + len, av[i]);
    len += strlen(av[i]);
    *(str + len) = '\n';
    len++;
  }

  *(str + len) = '\0';

  return str;
}
