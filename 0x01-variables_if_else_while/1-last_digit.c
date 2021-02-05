#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 5)
	{
	printf("Last digit of n is and is greater than 5\n", n)
	}
else if(
	printf("Last digit of n is and is 0\n", n)
else
	printf("Last digit of n is and is less than 6 and not 0\n", n)

return (0);
}
