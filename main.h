#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int my_putcha(char c);
int putss(char *c);
int print_int(va_list args);
int print_37(void);
int _strlen(char *str);
int printf_string(va_list val);
int printf_char(va_list val);
int _strlenc(const char -str);


#endif
