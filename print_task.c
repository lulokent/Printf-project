#include "main.h"
/**
 * printf_int - it prints integer
 * @args: argument to print
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp =1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		my_putcha('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while(num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			my_putcha(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	my_putcha(last + '0');

	return (i);
}