#include "holberton.h"
/**
  * print_triangle - Prints diagonal at the end of n spaces.
  * Return: Nothing.
  * @size: Number to check.
  */
void print_triangle(int size)
{
int a;
int b;
int c;

	if (size <= 0)
	{
	_putchar('\n');
	}

		for (a = 0; a <= size - 1; a++) /**cant de espa**/
		{

			for (c = size - 1 ; c > a; c--) /**cant de espa**/
			{
			_putchar(' ');
			}

			for (b = 0; b <= a; b++) /**cant de espa**/
			{
			_putchar('#');
			}

			_putchar('\n');


		}


}

