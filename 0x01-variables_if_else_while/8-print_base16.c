
#include <stdio.h>
/* Produced by Aura Margarita Zambrano */

/**
 *main -Program that prints numbers base 16..
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{

	char ch;
for (ch = 48 ; ch <= 57 ; ch++)
{
	putchar (ch);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
	putchar (ch);
}

putchar ('\n');

	return (0);
}
