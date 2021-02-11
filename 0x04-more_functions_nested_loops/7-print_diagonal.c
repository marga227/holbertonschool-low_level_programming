#include "holberton.h"
/**
  * print_diagonal - Prints diagonal at the end of n spaces.
  * Return: Nothing.
  * @n: Number to check.
  */
void print_diagonal(int n)
{


if (n > 0)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b != a; b++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}

}
else
_putchar('\n');
}
