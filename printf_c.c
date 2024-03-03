#include "main.h"

/**
 * printf_c - prints character for conversion specifiers
 * @c: char arguments
 * description - function to print characters
 * Return: 1
 */

int printf_c(va_list c)
{
	char str;

	str = va_arg(c, int);
	_putchar(str);
	return (1);
}
