#include "holberton.h"
/**
  * print_line - Prints line n times.
  * Return: Nothing.
  * @n: Number to check.
  */
void print_line(int n)
{

if (n > 0)
{

	int a;

	for (a = 0; a < n; a++)
	{
	_putchar('_');
	}

_putchar('\n');

}
else
_putchar('\n');
}
