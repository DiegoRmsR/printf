#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct format - Struct format
 *
 * @format: The operator
 * @f: The function associated
 */
typedef struct format
{
	char *format;
	int (*f)(va_list list);
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int get_print_func(char identifier, va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_porcent(va_list list);
int print_integer(va_list list);
int print_base2(unsigned int n, int length);
int print_binary(va_list list);
int print_unsig(va_list list);
int print_base8(unsigned int n, int length);
int print_octal(va_list list);
int print_base16min(unsigned int n, int length);
int print_min_hexa(va_list list);
int print_base16(unsigned int n, int length);
int print_hexa(va_list list);
int print_Rot13(va_list list);
int print_rev(va_list list);

#endif
