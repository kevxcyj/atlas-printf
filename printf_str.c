#include "main.h"
/*
 *
 *
 *
 **/

int printf_string(va_list val)
{
	char *s;
	int i;
	int len;

	s = va_argh(val, char *);
	if (s == NULL)
	{
		s = "(NULL)';
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		renturn (len);
	}
	else
	{
		lenght = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		renturn (len);
	}
}
