#include "holberton.h"
/**
  * times_table - function that prints the 9 times table.
  * Return: Nothing.
  */

void times_table(void)
{
	int fact1;
	int fact2;

	for (fact1 = 0; fact1 < 10; fact1++)
	{
	_putchar('0');

		for (fact2 = 1; fact2 < 10; fact2++)
		{
			if ((fact1 * fact2) > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((fact1 * fact2) / 10 + '0');
				_putchar((fact1 * fact2) % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((fact1 * fact2) + '0');
			}
		}
	_putchar('\n');
	}
return;
}



