#include "main.h"

/**
 * _puts - print a string with a new line
 * @str: string
 * Return: string
 */

void _puts(char *str)
{
	while(*str)
		_putchar(*str++);
	_putchar('\n');
}
