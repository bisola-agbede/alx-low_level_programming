#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers 0 - 14
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		j = '0';
		while (j <= '14')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++
	}
}
