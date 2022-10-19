#include "main.h"

/**
 * c_specifiers - checks for conversion specifiers
 * @format: format specifier
 * Return: pointer
 */

int (*c_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t cs[] = {
		{"c", print_c}, {"s", print_s},
		{"i", print_i}, {"d", print_d},
		{"u", print_u}, {"b", print_b},
		{"o", print_o}, {"x", print_x},
		{"X", print_X}, {"p", print_p},
		{"S", print_S}, {"r", print_r},
		{"R", print_R}, {NULL, NULL}
	};

	for (i = 0; cs[i].t != NULL; i++)
	{
		if (*(cs[i].t) == *format)
			break;
	}
	return (cs[i].f);
}

/**
 * _printf - produces output according to a format
 * @format: argument types
 * Return: number of characters printed
 *	(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, char_num = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			char_num++;
		}
		if (!format[i])
			return (char_num);
		f = c_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			char_num += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		char_num++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (char_num);
}
