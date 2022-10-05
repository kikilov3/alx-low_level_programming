#include "main.h"
/**
 * _strlen - Return the length of a given string
 * @s: Pointer to the string
 * Return: length of s
 */
int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}
