#include "main.h"

/**
 * print_i - prints an integer
 * @i: integer to be printed
 *
 * Return: number of characters and digits printd
 */
int print_i(va_list i)
{
	int b[10];
	int j, m, n, sum, riper;

	n = va_arg(i, int);
	riper = 0;
	m = 1000000000;
	b[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		b[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		riper++;
		for (j = 0; j < 10; j++)
			b[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += b[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + b[j]);
			riper++;
		}
	}
	return (riper);
}

/**
 * print_d - prints a decimal
 * @d: decimal to be printed
 *
 * Return: number of characters and digits printed
 */
int print_d(va_list d)
{
	int b[10];
	int j, m, n, sum, riper;

	n = va_arg(d, int);
	m = 1000000000;
	riper = 0;
	b[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		b[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		riper++;
		for (j = 0; j < 10; j++)
			b[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += b[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + b[j]);
			riper++;
		}
	}
	return (riper);
}
