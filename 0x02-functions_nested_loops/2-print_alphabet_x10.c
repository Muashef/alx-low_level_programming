#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char m, i;

	for (i = 0; i <= 9; i++)
	{
		for (m = 'a'; m <= z; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
