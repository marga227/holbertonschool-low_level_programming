#include "holberton.h"
/**
  * print_last_digit - Function that prints the last digit of a number.
  * Return: last.
  * @n: Number to check.
  */

int print_last_digit(int n)

{
	int a = n % 10;

	if (a < 0)
		a =  a * -1;
	_putchar(a + '0');
	return (a);
}
