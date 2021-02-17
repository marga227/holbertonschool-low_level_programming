#include "holberton.h"
/**
  * puts2 - Prints every other character of a string.
  * Return: Nothing.
  * @str: Pointer of string.
  */
void puts2(char *str)
{
	int  i;/*contador*/
	i = 0;

	while (*str)
	{
		if (i++ % 2 == 0)
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
