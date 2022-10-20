#include "main.h"

/**
 * get_flag - if printf finds a modifier, a flag
 * is turned on
 * @s: char holds flag specifier
 * @f: pointer to the struct flags
 * Return: 1 if the flag has been turned on, 0 otherwise
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
