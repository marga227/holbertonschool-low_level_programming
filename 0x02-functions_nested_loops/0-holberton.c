#include "holberton.h"
/**
 * main - Program to print string "Holberton"
 *
 * Return: Always 0.
 */
int main(void)
{

char name[] = "Holberton\n";
int a;

for (a = 0; a <= 10; a++)

{
	_putchar(name[a]);
}

_putchar('\n');
return (0);
}
