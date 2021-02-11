#include "holberton.h"
/**
  * print_square - Prints diagonal at the end of n spaces.
  * Return: Nothing.
  * @size: Number to check.
  */
void print_square(int size)
{


if (size > 0)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
}
else
_putchar('\n');

}
