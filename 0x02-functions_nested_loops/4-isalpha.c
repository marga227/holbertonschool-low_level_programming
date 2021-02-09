#include "holberton.h"
/**
  * _isalpha - Function that checks for alphabetic character.
  * Return: 1 and 0.
  * @c: Letter to check.
  */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{return (1);
}


else
{
return (0);
}

}
