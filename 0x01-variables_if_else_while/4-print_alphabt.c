
#include <stdio.h>
/* Produced by Aura Margarita Zambrano */

/* betty style doc for function main goes there */
/**
 *main -Program that prints the alphabet in lowercase except q and e.
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
	char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
	putchar (ch);
}
}
putchar ('\n');

	return (0);
}
