#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: On success 1, on error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

/**
 * print_rev - prints a string in reverse order
 * @s: the string to print
 * Return: none
 */
void print_rev(char *s)
{
/* Calculate the length of the string */
int longi = 0;
int o;

while (*s != '\0')
{
longi++;
s++;
}

/* Print the string in reverse order */
s--;
for (o = longi; o > 0; o--)
{
_putchar(*s);
s--;
}

_putchar('\n');
/* Print a newline character at the end */
}
void puts2(char *str)
{
int longi = 0;
int o;

/* Get the length of the string */
while (str[longi] != '\0')
{
longi++;
}

/* Print every other character */
for (o = 0; o < longi; o += 2)
{
_putchar(str[o]);
}
_putchar('\n');
/* Print a newline character at the end */
}
int _putchar(char c)
{
return (write(1, &c, 1));
}
