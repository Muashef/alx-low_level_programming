#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: n is an integer
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 10)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
