#include "holberton.h"
/**
  * _islower - Prints lowercase character.
  * Return: 1 and 0.
  * @c: Letter to check.
  */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

