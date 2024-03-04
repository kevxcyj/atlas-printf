#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
        char *st;
        int (*p)();
} same;

int _putchar(char c);
/* Function for _putchar */

int _printf(const char *format, ...);
/* Task zero, a function that produces output according to a format */

int printf_c(va_list las);
/* Task zero, function that prints characters */

int printf_s(va_list s);
/* Task zero, function that prints S */

int print_perc(void);
/* Task zero, function that prints % */

int _strlen(char *str);
/* Task zero, function for printing string */

int _strlen_c(const char *str);
/* Task zero, function for printing string */

int printf_c(va_list c);

int printf_i(va_list i);
/* Task one, function for conversion specifier i */

int printf_d(va_list i);







#endif
