#include "holberton.h"
/**
  * _puts - Prints a string.
  * Return: Nothing.
  * @str: Pointer of string.
  */
void _puts(char *str)
{

	while (*str != '\0')

	_putchar(*str++);

	_putchar('\n');

}
