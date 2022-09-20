#include "main.h"
/**
 * print_rev - Print a string in rev
 * @s: String to be printed
 */
void print_rev(char *s)
{
int i, n;

for (i = 0; s[i] != '\0'; i++)
;
for (n = i - 1; n >= 0; n--)
_putchar(s[n]);
_putchar('\n');
}
