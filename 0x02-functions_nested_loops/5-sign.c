#include "main.h"
/**
 * print_sign - a program that prints the sign of a number.
 *
 * @n: the variable to be tested
 *
 * Return: 1 if true, 0 if zero, -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
