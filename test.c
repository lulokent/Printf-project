#include "main.h"

/**
 * _print - produces output according to a format
 * @format: character string
 * Return: 0 (succces)
 */
int _printf(const char *format, ...)
{
	int len = 0;
	int i = 0;
	char *ptr;

	va_list list;

	if ( format == NULL)
	{
		return(-1);
	}

	va_start(list, format);
	
	if (format)
