#include "main.h"

/**
 * get-print - all printing functions are selected
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Return: pointer to matching printing function
 */

int (*get_print(char s))(va_list, flags_t *)
{
	ph fun[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (fun[i].c == s)
			return (fun[i].f);
	return (NULL);
}
