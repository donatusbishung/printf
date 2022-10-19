#include "main.h"

/**
 * print_R - prints the rot13'ed string
 * @R: string
 * Return: number of characters to be printed
 */
int print_R(va_list R)
{
	char *str;
	unsigned int len, i;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int n_char = 0;

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (len = 0; str[len]; len++)
	{
		for (i = 0; in[i]; i++)
		{
			if (in[i] == str[len])
			{
				_putchar(out[i]);
				n_char++;
				break;
			}
		}
		if (!in[i])
		{
			_putchar(str[len]);
			n_char++;
		}
	}
	return (n_char);
}
