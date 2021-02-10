#include "holberton.h"
/**
  * print_last_digit - Function that prints the last digit of a number.
  * Return: last.
  * @n: Number to check.
  */

int print_last_digit(int n)

{

if (n < 0)
n =  (n % 10) * -1;


_putchar((n % 10) + '0');



return (n);
}
