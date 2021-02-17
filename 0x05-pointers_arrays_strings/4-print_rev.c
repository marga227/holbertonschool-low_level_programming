#include "holberton.h"
/* Produced by Aura Margarita Zambrano */
/**
 *print_rev -Program that prints string in reverse.
 *
 *Return: Nothing.
 *@s: pointer.
 */
void print_rev(char *s)
{

	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
	}

	for (j = i - 1; j >= 0 ; j--)
	{
	_putchar (s[j]);
	}

	_putchar ('\n');

}
