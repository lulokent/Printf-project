#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int my_putcha(char c);
int putss(char *c);
void print_char(char c, int n);
int print_per(void);

#endif
