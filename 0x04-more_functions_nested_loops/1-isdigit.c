#include "holberton.h"
/**
  * _isdigit - Prints digit 0through 9.
  * Return: 1, 0.
  * @c: Number to check.
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
