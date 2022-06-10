#include "main.h"
/**
 * _isupper - checks for a uppercase character
 *
 * @c: variable to be checked whether uppercase
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
