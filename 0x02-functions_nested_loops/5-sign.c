#include "holberton.h"
/**
  * print_sign - Prints sign  +, - y 0.
  * Return: 1, 0 and -1.
  * @n: Number to check.
  */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

		else if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
			else
			{
			_putchar('0');
			return (0);
			}

}
