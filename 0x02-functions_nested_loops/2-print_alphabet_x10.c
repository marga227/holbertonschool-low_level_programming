#include "holberton.h"

/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_alphabet_x10(void)
{
char c;
char j;

for (c = 0 ; c <= 9; c++)
{
for (j = 'a'; j <= 'z'; j++)
{
	_putchar(j);
}
_putchar('\n');
}
_putchar('\n');
return;
}
