
#include <stdio.h>
/* Produced by Aura Margarita Zambrano */

/**
 *main -Program that prints all possible combinations of numbers.
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{

	int ch;
for (ch = 48 ; ch <= 57 ; ch++)
{	putchar (ch);

	if (ch >= 48 && ch <= 56)
{
		putchar (',');
		putchar (' ');
}
	if (ch == 57)
		putchar ('\n');
}
	return (0);
}

