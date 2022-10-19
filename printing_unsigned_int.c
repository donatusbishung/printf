#include "main.h"

/**
 * print_u - prints an unsigned int in decimal notation
 * @u: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_u(va_list u)
{
	unsigned int b[10];
	unsigned int i, m, n, sum;
	int riper;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	b[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		b[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, riper = 0; i < 10; i++)
	{
		sum += b[i];
		if (sum || i == 9)
		{
			_putchar('0' + b[i]);
			riper++;
		}
	}
	return (riper);
}

/**
 * print_o - takes an unsigned integer and prints it in octal notation
 * @o: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_o(va_list 0)
{
	unsigned int b[11];
	unsigned int i, m, n, sum;
	int riper;

	n = va_arg(o, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	b[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		b[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, riper = 0; i < 11; i++)
	{
		sum += b[i];
		if (sum || i == 10)
		{
			_putchar('0' + b[i]);
			riper++;
		}
	}
	return (riper);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned int to print
 *
 * Return: number of digits
 */
int print_b(va_list b)
{
	unsigned int n, m, i, sum;
	unsigned int b[32];
	int riper;

	n = va_arg(b, unsigned int);
	m = 2147483648; /* (2 ^ 31)*/
	b[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		b[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, riper = 0; i < 32; i++)
	{
		sum += b[i];
		if (sum || i == 31)
		{
		_putchar('0' + b[i]);
		riper++;
		}
	}
	return (riper);
}
