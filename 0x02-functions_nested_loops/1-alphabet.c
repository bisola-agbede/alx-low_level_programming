#include "main.h"
/**
 * main - prints alphabet in lower case followed by new line
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n')
}
