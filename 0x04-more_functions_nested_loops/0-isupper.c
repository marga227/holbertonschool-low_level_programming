#include "holberton.h"
/**
  * _isupper - Prints uppercase character.
  * Return: 1 and 0.
  * @c: Letter to check.
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

