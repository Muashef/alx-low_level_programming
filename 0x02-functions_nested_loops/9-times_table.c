#include "main.h"

/**
 * times_table - print 9 times table
 * Description: print 9 times table
 * Return: void
 */
void times_table(void)
{
	int row, column, products, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			products = row * column;
			tens = products / 10;
			ones = products % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (products < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
