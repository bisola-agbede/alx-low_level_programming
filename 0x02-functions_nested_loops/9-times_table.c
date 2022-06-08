#include "main.h"
/**
 * times_table - a program that prints 9 times table starting from 0
 *
 */
void times_table(void)
{
int row;
int column;
int value;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
value = (row * column);
if (column == 0)
{
_putchar('0' + value);
}
else if (value <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + value);
}
else if (value > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (value / 10));
_putchar('0' + (value % 10));
}
}
_putchar('\n');
}
}
