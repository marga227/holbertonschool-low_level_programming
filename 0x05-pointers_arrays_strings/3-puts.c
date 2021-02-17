#include "holberton.h"
/**
  * _puts - Prints a string.
  * Return: Nothing.
  * @str: Pointer of string.
  */
void _puts(char *str)
{
	int i;

	for (i = 0; i <= *str; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');

}
