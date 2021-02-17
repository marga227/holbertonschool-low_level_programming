#include "holberton.h"
/**
  * _strlen - Returns the length of a string.
  * Return: i.
  * @s: Pointer of str.
  */

int _strlen(char *s)
{
	int i;/*contador */

	i = 0;
	while (s[i] != 0)
	i++;

	return (i);
}
