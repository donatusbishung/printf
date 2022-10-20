#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - structure for printing various types
 * @c: type to print
 * @f: function to print
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/**
 * struct flags - struct containing flags to turn on
 * @plus: for + character
 * @space: for ' ' character
 * @hash: for # character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digits(int i);

int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

char *converter(unsigned long int num, int base, int lowercases);

int _printf(const char *format, ...);

int (*get_flag(char s))(va_list, flags_t *f);

int get_flag(char s, flags_t *f);

int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

int _putchar(char c);
int _puts(char c);

int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

int print_address(va_list l, flags_t *f);

int print_percent(va_list l, flags_t *f);

#endif /* MAIN_H */
