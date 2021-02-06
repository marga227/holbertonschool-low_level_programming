#include <stdio.h>
/* more headers goes there */

/**
 *main - Program that print alphabet.
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
	int ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar (ch);

for (ch = 'A' ; ch <= 'Z' ; ch++)
	putchar (ch);

putchar ('\n');

return (0);
}
