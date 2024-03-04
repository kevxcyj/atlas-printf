#include "main.h"
/*
 * printf_str - Prints string
 * @val: argument
 *
 * Return: String length
 **/

int printf_str(va_list val)
{
	char *s;
	int i;
	int len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(NULL)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
