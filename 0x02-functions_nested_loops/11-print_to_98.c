#include <stdio.h>
/**
  * print_to_98 - prints numbers to 98.
  *
  * Return: n.
  * @n: number to check.
  */

void print_to_98(int n)
{

int i;


	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
		printf("%i", i);
			if (i != 98)
			printf(", ");
		}

	}

	else
	{
		for (i = n; i <= 98; i++)
		{
		printf("%i", i);
			if (i != 98)
			printf(", ");
		}
	}

printf("\n");
return;
}
