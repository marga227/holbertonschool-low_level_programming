#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main -Entry point
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
	char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar (ch);
}
return (0);
}
