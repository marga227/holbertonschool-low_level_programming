
#include <stdio.h>
/* Produced by Aura Margarita Zambrano */

/**
 *main -Program that prints the alphabet in reverse.
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
	char ch;
for (ch = 'z'; ch >= 'a' ; ch--)
{
	putchar (ch);
}

putchar ('\n');

	return (0);
}
