#include <stdio.h>
/*
 * main - Program that computes and prints the sum of all the multiples
 * of al the miltiples of 3 or 5 below 1024.
 *
 * Return - Always 0.
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 1024; i++) /*números a chequear*/
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}

	}
	printf("%i\n", sum);
	return (0);
}
