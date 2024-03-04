#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar (char c);
/* Function for _putchar */

int _printf(const char *format, ...);
/* Task zero, a function that produces output according to a format */

int printf_char(va_list las)
/* Task zero, function that prints characters */


int printf_c(va_list c);

int printf_i(va_list i);
/* Task one, function for conversion specifier i */

int printf_s(va_list s);

int _strlen(char *str);

int _strlen_c(const char *str);








#endif
