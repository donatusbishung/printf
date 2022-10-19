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
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				n_char++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			n_char++;
		}
	}
	return (n_char);
}	
