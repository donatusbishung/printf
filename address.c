#include "main.h"

/**
 * print_address - address are printed in hexa format
 * @l: va_list arg from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of char printed
 */

int print_address(va_list l, flags_t *f)
{
	char *string;
	unsigned long int p = va_arg(l, unsigned long int);

	register int riper = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	string = convert(p, 16, 1);
	riper += _puts("0x");
	riper += _puts(string);
	return (riper);
}
