#include "main.h"
/**
 * print_rev - Print a string in rev
 * @s: String to print
 * Return: nothing
 */
void print_rev(char *s)
{
i = 0;

while (*(s + i))
i++;
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
