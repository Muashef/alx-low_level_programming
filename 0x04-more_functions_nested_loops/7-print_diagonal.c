#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input integer
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, m;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (m = 0; m < i; m++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n')
}
