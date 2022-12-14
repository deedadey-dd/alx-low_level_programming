#include "main.h"

/**
 * print_sign - print the sign of numbe
 * @n: the integer to be checked
 * Return: 1 and rpints if n>zero, 0 otherwise
 * -1 and prints if n<zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
