#include "main.h"

/**
 * printf_s - printing a string
 * @las: arguments
 * Return: string of the length
 */

int printf_s(va_list las)
{
	char *str;
	int a;
	int b;

	str = va_arg(las, char *);
	if (str == NULL)
	{
		str = "(null)";
		b = _strlen(str);
		for (a = 0; a < b; a++)
			_putchar(str[a]);
		return (b);
	}
	else
	{
		b = _strlen(str);
		for (a = 0; a < b; a++)
			_putchar(str[a]);
		return (b);
	}
}
