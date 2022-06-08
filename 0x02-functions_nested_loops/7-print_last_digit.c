#include "main.h"
/**
 * print_last_digit - a program that prints the last digit of a number
 *
 * @n: the number that we will take and return its last digit
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		_putchar(-r + 48);
		return (-r);
	}
	else
	{
		_putchar(r + 48);
		return (r);
	}
}
