#include "main.h"

/**
 * print_c - prints characters
 * @c: characters to print
 *
 * Return: Always 1
 */
int print_c(va_list c)
{
	char xt = (char)va_arg(c, int);

	_putchar(xt);
	return (1);
}

/**
 * print_s - prints a string
 * @s: str to prnt
 *
 * Return: no of characters printed
 */
int print_s(va_list s)
{
	int riper;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[riper]; riper++)
	{
		_putchar(str[riper]);
	}
	return (riper);
}
/**
 * hex_print - prints a characters ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of char printed (always)
 */
static int hex_print(char c)
{
	int riper;
	char diff = 'A'- ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (riper = 0; riper < 2; riper++)
	{
		if (d[riper] >= 10)
			_putchar('0' + diff + d[riper]);
		else
			_putchar('0' + d[riper]);
	}
	return (riper);
}

/**
 * print_S - prints a string and nonprintable char ascii values
 * @S: string to be printed
 *
 * Return: number of chars printed
 */
int print_S(va_list S)
{
	unsigned int i;
	int riper = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			riper += 2;
			riper += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			riper++;
		}
	}
	return (riper);
}

/**
 * print_r - prints a string in reverse
 * @r: string to print
 *
 * Return: number of characters printed
 */
int print_r(va_list r)
{
	char *str;
	int i, riper = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		riper++;
	}
	return (riper);
}
