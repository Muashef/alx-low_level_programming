#include "main.h"

/**
 * more_numbers - function that prints from 0 t0 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		-putchar('\n')
	}
}

