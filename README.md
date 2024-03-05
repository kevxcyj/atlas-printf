# atlas-printf
_PRINTF "MARCH 2024" "Atlas Printf Partner Project"


# NAME
_printf - Printf function


# SYNOPSIS
#include "main.h"

int _printf(const char *format, ...)


# DESCRIPTION
_printf function produces an output according to a format.The function produces the output by running the "_printf.c" file. The function contains the following specifiers:
%d - decimal
%c - character
%s - string
%i - integer
%% - percent

Using these, it outputs the given strings.


# EXAMPLES
An example of the _printf function

#include <stdio.h>
#include "main.h"

int main(void)
{
        int i;
        i = _printf("Man Page");
return 0;
}


# SEE ALSO
_printf.c, main.c

# AUTHOR

Kevin Cyrus Jr, LJ Thao

