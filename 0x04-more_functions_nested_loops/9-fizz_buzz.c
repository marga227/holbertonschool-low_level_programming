#include <stdio.h>
#include "holberton.h"
/* Produced by Aura Margarita Zambrano */
/**
 *main -Program that prints numbers 0-100.
 *
 *Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1 && i <= 100)
		printf(" ");

		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");

		else if (i % 3 == 0)
		printf("Fizz");

		else if (i % 5 == 0)
		printf("Buzz");

		else
		printf("%d", i);

	}

printf("\n");
return (0);
}
