#include "main.h"

/**
 * _printf - function that prints a function
 * @format: format specifiers
 * Return: the number of characters
 */

int _printf(const char *format, ...)
{
	int a = 0;

	va_list list;
	
	if(format == NULL)
		return (1);
	
	va_start(list, format);

	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
			a++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				a++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(list, int);
				write(1, &c, 1);
				a++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				a += str_len;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list, int);
				char str[20];
				int len = 0;

				if (num < 0)
				{
					write(1, "-", 1);
					a++;
					num = -num;
				}
				do
				{
					str[len++] = '0' + num % 10;
					num /= 10;
				}
				while (num != 0);

				for (int i = len - 1; i >= 0; i--)
				{
					write(1, &str[i], 1);
					a++;
				}
			}
		}
		format++;
	}
	va_end(list);

	return a;
}
