#include "holberton.h"
/* Produced by Aura Margarita Zambrano */
/**
 *more_numbers -Program that prints numbers 0-9.
 *
 *Return: Nothing.
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 10; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
		_putchar (b % 10 + '0');

			if (b > 9 && b < 14)
			{
			_putchar (b / 10 + '0');
			}
		}

	_putchar ('\n');
	}

}

