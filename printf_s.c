#include "main.h"

/**
 * printf_s - printing a string
 * @s: s arguments
 * Return: string of the length
 */

int printf_s(va_list s)
{
	char *str;
	int a;
	int b;

	str = va_arg(s, char *);
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
