#include "main.h"

/**
 * printf_c - prints character for conversion specifier c
 * @c: char arguments
 * Return: 1
 */

int printf_c(va_list c)
{
	char str;

	str = va_arg(c, int);
	_putchar(str);
	return (1);
}
