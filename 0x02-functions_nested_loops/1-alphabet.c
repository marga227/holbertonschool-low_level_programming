#include "holberton.h"
/**
 * print_alphabet - Program that print alphabet.
 *
 * Return: nothing.
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return;
}

