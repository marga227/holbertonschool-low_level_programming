#include <stdio.h>
/* Produced by Aura Margarita Zambrano */

/**
 *main -Program that prints all numbers to 00 - 99.
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
	int ch;
for (ch = 0 ; ch < 100 ; ch++)
{	putchar ((ch / 10) + '0');
	putchar ((ch % 10) + '0');

if (ch  >= 0 && ch <= 99)
{
	putchar (',');
	putchar (' ');
}
	if (ch == 99)
		putchar ('\n');
}
	return (0);
}

