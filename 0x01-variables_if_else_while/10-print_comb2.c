#include <stdio.h>
/* Produced by Aura Margarita Zambrano */

/**
 *main -Program that prints all numbers to 00 - 99.
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
	int i;
for (i = 0 ; i < 100 ; i++)
{	putchar ((i / 10) + '0');
	putchar ((i % 10) + '0');

if (i  >= 0 && i <= 98)
{
	putchar (',');
	putchar (' ');
}
	if (i == 99)
		putchar ('\n');
}
	return (0);
}

