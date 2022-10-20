#include "main.h"

/**
 * convert - converts number and base to string
 * @num: inputed number
 * @base: inputed base
 * @lowercase:
 *
 * Return: string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *all;
	static char buffer[50];
	char *p;

	all = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	do {
		*--p = all[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}
