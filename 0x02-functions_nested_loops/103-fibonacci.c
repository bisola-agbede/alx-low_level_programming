#include <stdio.h>
/**
 * main - a program that prints the sum of the even-valued terms, followed by a new line
 * by considering the terms in the fibonacci sequence whose value does not exceed 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
