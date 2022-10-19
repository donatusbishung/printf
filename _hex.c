#include "main.h"

/**
 * _hex - prints unsigned int in hexidecimal form
 * @n: unsigned int
 * @c: flag
 * Return: number of digits printed
 */
int _hex(unsigned int n, unsigned int c)
{
	unsigned int a[8], i, m, sum;
	char diff;
	int n_digits;

	m = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, n_digits = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			n_digits++;
		}
	}
	return (n_digits);
}

/**
 * print_x - prints unsigned int in lowercase hex notation
 * @x: unsigned int
 * Return: numbers of digits printed
 */
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - prints unsigned int in uppercase hex notation
 * @X: unsigned int
 * Return: number of digits printed
 */
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of number
 * Return: base raised to power of exponent
 */
unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i, ans = base;

	for (i = 1; i < exponent; i++)
		ans *= base;
	return (ans);
}

/**
 * print_p - prints address
 * @p: address
 * Return: number of characters to print
 */
int print_p(va_list p)
{
	int n_char = 0;
	unsigned int a[16], i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			n_char++;
		}
		return (n_char);
	}
	_putchar('0');
	_putchar('x');
	n_char = 2;
	m = _pow(16, 15);
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			n_char++;
		}
	}
	return (n_char);
}