#include "main.h"

/**
 * _putchar - prints or write character to stdout
 * @c: character to prnt
 *
 * Return: 1 on success or -1 is error and errno set
 * appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
